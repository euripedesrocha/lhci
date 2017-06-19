project('lhci', 'cpp', 'c',
    version : '0.0.1',
    license : 'MIT')

add_global_arguments('-Werror',
    '-Wall',
    language : 'cpp')

add_global_arguments('-Werror',
    '-Wall',
    language : 'cpp')

if meson.is_cross_build()
  elf = executable('lhci.elf',
      design_sources,
      include_directories : includes,
      install : false)
else

  test_sources = ['test/test_main.cpp']
  test_includes = ['test/tools/fff'
      ,'test/tools/catch/']
  include_files = test_includes
  includes = include_directories(include_files)
  sources = test_sources
  tester = executable('catch',
      sources,
      c_args : '-DTEST',
      cpp_args : '-DTEST',
      include_directories : includes,
      install : false)
endif
