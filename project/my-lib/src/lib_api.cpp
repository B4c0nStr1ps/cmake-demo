#include "my-lib/lib_api.hpp"
#include <iostream>

namespace dsl {
	auto do_print() -> void {
		std::cout << "hello from my-lib!!\n";
	}
}
