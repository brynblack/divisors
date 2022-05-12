project('divisors', 'cpp',
  default_options : ['cpp_std=c++20', 'warning_level=3'],
  license : 'MIT',
  meson_version : '>= 0.62.1',
  version : '1.0.3')

include_dir = include_directories('include')

subdir('src') # project_sources

executable('divisors',
  project_sources,
  include_directories : include_dir,
  install : true,
  link_args : ['-flto', '-Ofast', '-s', '-static'])
