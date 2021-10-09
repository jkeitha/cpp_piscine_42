#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "wrong input\n";
		return 1;
	}
	Convert convert = Convert(argv[1]);
	try {
		convert.printChar();
	} catch (const char *message) {
		std::cout << message << std::endl;
	}
	try {
		convert.printInt();
	} catch (const char *message) {
		std::cout << message << std::endl;
	}
	try {
		convert.printFloat();
	} catch (const char *message) {
		std::cout << message << std::endl;
	}
	try {
		convert.printDouble();
	} catch (const char *message) {
		std::cout << message << std::endl;
	}
	return 0;
}
