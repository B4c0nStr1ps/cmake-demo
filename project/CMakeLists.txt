cmake_minimum_required(VERSION 3.5)
project(cmake-demo VERSION 1.0.0 LANGUAGES CXX)

add_subdirectory(thirdparty/google/googletest)
add_subdirectory(my-lib)
add_subdirectory(my-app)
