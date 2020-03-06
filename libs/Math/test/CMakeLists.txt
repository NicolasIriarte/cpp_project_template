add_executable(math-lib-test test.cpp)
target_link_libraries(math-lib-test 
  PRIVATE
  math
  project_warnings
  project_options
  CONAN_PKG::gtest
  )

gtest_discover_tests(math-lib-test)


