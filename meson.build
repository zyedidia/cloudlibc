project(
  'cloudlibc',
  ['c', 'cpp'],
  default_options: ['warning_level=1', 'buildtype=release', 'cpp_std=c++11'],
  meson_version: '>=0.60.3'
)

srcs = []

subdir('src')

libc = static_library(
  'c',
  srcs,
  c_args: ['-nostdinc', '-nostdlib'],
  include_directories: include_directories('src/include', 'src', 'headers', 'argdata/src'),
)
