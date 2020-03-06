add_executable(project-test
  test.cpp
  func.cpp
  ${PROJECT_SOURCE_DIR}/src/func.cpp
  )
include_directories("${PROJECT_SOURCE_DIR}/src")

target_link_libraries(project-test
  PRIVATE
  project_warnings
  project_options
  CONAN_PKG::gtest
  )

gtest_discover_tests(project-test)


