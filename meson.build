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
)
