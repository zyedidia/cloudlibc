project(
  'cloudlibc',
  ['c', 'cpp'],
  default_options: ['warning_level=1', 'buildtype=release', 'cpp_std=c++11'],
  meson_version: '>=0.60.3'
)

cloudabi = subproject('cloudabi').get_variable('cloudabi_headers_dep')
argdata = subproject('argdata').get_variable('argdata_dep')

srcs = []

subdir('src')

libc = static_library(
  'c',
  srcs,
  c_args: ['-nostdinc', '-nostdlib'],
  dependencies: [cloudabi, argdata],
  include_directories: include_directories('src/include', 'src'),
  install: true,
)

libcrt = static_library(
  'crt',
  crt_srcs,
  c_args: ['-ffreestanding', '-fno-stack-protector', '-fno-sanitize=safe-stack', '-nostdinc', '-nostdlib'],
  dependencies: [cloudabi, argdata],
  include_directories: include_directories('src/include', 'src'),
)

custom_target('crt0',
  output: 'crt0.o',
  input: libcrt.extract_objects(crt0_src),
  command: ['cp', '@INPUT@', '@OUTPUT@'],
  install: true,
  install_dir: 'lib'
)
custom_target('crtbegin',
  output: 'crtbegin.o',
  input: libcrt.extract_objects(crtbegin_src),
  command: ['cp', '@INPUT@', '@OUTPUT@'],
  install: true,
  install_dir: 'lib'
)
custom_target('crtend',
  output: 'crtend.o',
  input: libcrt.extract_objects(crtend_src),
  command: ['cp', '@INPUT@', '@OUTPUT@'],
  install: true,
  install_dir: 'lib'
)
