# Define an executable.
add_executable(my-app src/main.m.cpp)

# Set language standard to c++17.
target_compile_features(my-app PRIVATE cxx_std_17)
# Set treat warnings as errors.
target_compile_options(my-app PRIVATE -Werror)

target_link_libraries(my-app
	PUBLIC
		my-lib
)

