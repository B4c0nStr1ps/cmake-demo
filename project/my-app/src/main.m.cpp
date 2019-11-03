#include <iostream>
#include "my-lib/lib_api.hpp"

int main(int argc, char* argv[]) {
	std::cout << "Hello from cmake-demo app!\n";
	dsl::do_print();
	return 0;
}
