# SPDX-FileCopyrightText: Hanspeter Portner <dev@open-music-kontrollers.ch>
# SPDX-License-Identifier: CC0-1.0

project('lv2lint', 'c', default_options : [
	'buildtype=release',
	'warning_level=3',
	'werror=false',
	'b_lto=true',
	'c_std=gnu11'])

cpu_family = target_machine.cpu_family()

match = {
  'x86'     : 'i386',
  'aarch64' : 'arm64'
}

if cpu_family in match
  cpu_family = match[cpu_family]
endif

mapper_lv2 = subproject('mapper.lv2')
varchunk = subproject('varchunk')

online_tests = get_option('online-tests')
elf_tests = get_option('elf-tests')
x11_tests = get_option('x11-tests')

reuse = find_program('reuse', required : false)

version = get_option('version')
build_tests = get_option('build-tests')

prefix= get_option('prefix')
libdir= get_option('libdir')
inst_dir = join_paths(libdir, meson.project_name())

add_project_arguments('-DLV2LINT_VERSION="'+version+'"', language : 'c')
add_project_arguments('-D_GNU_SOURCE', language : 'c')

conf_data = configuration_data()
conf_data.set('INST_DIR', join_paths(prefix, inst_dir))
cc = meson.get_compiler('c')

m_dep = cc.find_library('m')
rt_dep = cc.find_library('rt')
dl_dep = cc.find_library('dl')
lv2_dep = dependency('lv2', version : '>=1.18.0')
lilv_dep = dependency('lilv-0', version : '>=0.24.0')
curl_dep = dependency('libcurl', required: online_tests)
elf_dep = dependency('libelf', required: elf_tests)
x11_dep = dependency('x11', version : '>=1.6.0', required : x11_tests)
mapper_lv2_dep = mapper_lv2.get_variable('mapper')
varchunk_dep = varchunk.get_variable('varchunk')
	
deps = [m_dep, rt_dep, dl_dep, lv2_dep, lilv_dep, curl_dep, elf_dep, x11_dep, mapper_lv2_dep, varchunk_dep]

lib_deps = [rt_dep, dl_dep]

if online_tests.enabled()
	add_project_arguments('-DENABLE_ONLINE_TESTS', language : 'c')
	conf_data.set('ONLINE_TESTS', '')
else
	conf_data.set('ONLINE_TESTS', './')
endif

if cc.has_header('fnmatch.h') and cc.has_function('fnmatch')
	add_project_arguments('-DHAS_FNMATCH', language : 'c')
endif

if elf_tests.enabled()
	add_project_arguments('-DENABLE_ELF_TESTS', language : 'c')
	conf_data.set('ELF_TESTS', '')
else
	conf_data.set('ELF_TESTS', './')
endif

srcs = [
	join_paths('src', 'lv2lint.c'),
	join_paths('src', 'lv2lint_plugin.c'),
	join_paths('src', 'lv2lint_port.c'),
	join_paths('src', 'lv2lint_parameter.c'),
	join_paths('src', 'lv2lint_ui.c'),
  join_paths('src', 'lv2lint_shm.c')
]

if cc.has_function('clone', args : '-D_GNU_SOURCE', prefix : '#include <sched.h>')
  add_project_arguments('-DENABLE_WRAP_TESTS', language : 'c')

  if cc.has_member('struct ptrace_syscall_info', 'op',
      prefix : '#include <linux/ptrace.h>')
    add_project_arguments('-DENABLE_PTRACE_TESTS', language : 'c')

    srcs += join_paths('src', 'lv2lint_syscall.c')
    srcs += join_paths('src', 'lv2lint_syscall_' + cpu_family + '.c')
  endif
endif

lib_srcs = [
  join_paths('src', 'lv2lint_alloc.c'),
  join_paths('src', 'lv2lint_shm.c')
]

if x11_tests.enabled()
	add_project_arguments('-DENABLE_X11_TESTS', language : 'c')
	conf_data.set('X11_TESTS', '')
	srcs += join_paths('src', 'lv2lint_x11.c')
else
	conf_data.set('X11_TESTS', './')
endif

executable('lv2lint.bin', srcs,
	dependencies : deps,
	install : true,
  install_dir : inst_dir)

shared_module('lv2lint', lib_srcs,
  dependencies : lib_deps,
	name_prefix : '',
	install : true,
  install_dir : inst_dir)

configure_file(
  input : join_paths('man', 'lv2lint.1.in'),
  output : 'lv2lint.1',
	configuration : conf_data)

install_man(join_paths(meson.current_build_dir(), 'lv2lint.1'))

configure_file(
  input : join_paths('sh', 'lv2lint.in'),
  output : 'lv2lint',
	configuration : conf_data,
  install : true,
  install_dir : 'bin')

if build_tests
  if reuse.found()
    test('REUSE', reuse, args : [
      '--root', meson.current_source_dir(),
      'lint'
    ])
  endif
endif
