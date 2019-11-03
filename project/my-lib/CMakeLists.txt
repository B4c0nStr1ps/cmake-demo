# Define a library
add_library(my-lib include/my-lib/lib_api.hpp src/lib_api.cpp)

# Define the library include directories
target_include_directories(my-lib
    PUBLIC
        $<INSTALL_INTERFACE:include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
)


# Set language standard to c++17.
target_compile_features(my-lib PRIVATE cxx_std_17)
# Set treat warnings as errors.
target_compile_options(my-lib PRIVATE -Werror)

# Define the tests.
add_executable(my-lib-tests src/lib_api.t.cpp)
# Set language standard to c++17.
target_compile_features(my-lib-tests PRIVATE cxx_std_17)

target_link_libraries(my-lib-tests
        PRIVATE
        my-lib gtest_main
)

