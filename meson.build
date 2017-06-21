project('lhci', 'cpp', 'c',
    version : '0.0.1',
    license : 'MIT')

add_global_arguments('-Werror',
    '-Wall',
    language : 'cpp')

add_global_arguments('-Werror',
    '-Wall',
    language : 'cpp')

design_sources = ['src/main.c']

if meson.is_cross_build()

  design_sources += meson.get_cross_property('target_sources')
  design_include = meson.get_cross_property('target_includes')

  includes = include_directories(design_include)
  elf = executable('lhci.elf',
      design_sources,
      c_args : '-DCPU_MKL25Z128VLK4',
      include_directories : includes,
      install : false)
else

  test_sources = ['test/test_main.cpp']
  test_includes = ['test/tools/fff'
      ,'test/tools/catch/']
  include_files = test_includes
  includes = include_directories(include_files)
  sources = test_sources
  tester = executable('lhci-test',
      sources,
      c_args : '-DTEST',
      cpp_args : '-DTEST',
      include_directories : includes,
      install : false)
endif
