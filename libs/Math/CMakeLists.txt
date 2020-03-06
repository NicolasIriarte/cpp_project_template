add_library(math Factorial.cpp)
target_include_directories(math PUBLIC ./)
target_link_libraries(math 
  PRIVATE 
  project_options project_warnings
  )


install(TARGETS math
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION lib
  ARCHIVE DESTINATION lib
  )
