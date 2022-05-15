cmake_minimum_required(VERSION 3.0.0)
project(warehouse_oop_project1 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(warehouse_oop_project1 main.cpp date.cpp place.cpp product.cpp warehouse.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
