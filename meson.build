project('divisors', 'cpp',
  default_options : ['b_lto=true', 'cpp_std=c++20', 'warning_level=3'],
  license : 'MIT',
  meson_version : '>= 0.62.1',
  version : '1.0.0')

include_dir = include_directories('include')

subdir('src')

executable('divisors',
  main_source,
  include_directories : include_dir,
  install : true,
  link_args : ['-Ofast', '-s', '-static'])
