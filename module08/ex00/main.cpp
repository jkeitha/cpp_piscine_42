#include <iostream>
#include <algorithm>
#include <vector>
#include <array>
#include "easyfind.hpp"

void test_vector() {

	std::cout << "test vector:\n";

	std::vector<int> container;
	for (int i = 0; i < 5; i++)
		container.push_back(i);
	container.push_back(3);

	std::cout << "3 num: ";
	try {
		easyfind(container, 3);
	} catch (const std::string message) {
		std::cout << message;
	}
	std::cout << std::endl;

	std::cout << "8 num: ";
	try {
		easyfind(container, 8);
	} catch (const std::string message) {
		std::cout << message;
	}
	std::cout << std::endl;

	std::cout << "1 num: ";
	try {
		easyfind(container, 1);
	} catch (const std::string message) {
		std::cout << message;
	}
	std::cout << std::endl;

}

void test_array() {

	std::cout << "test array:\n";

	std::array<int, 3> container2 = { 5, 3, 1 };

	std::cout << "1 num: ";
	try {
		easyfind(container2, 1);
	} catch (const std::string message) {
		std::cout << message;
	}
	std::cout << std::endl;

	std::cout << "7 num: ";
	try {
		easyfind(container2, 7);
	} catch (const std::string message) {
		std::cout << message;
	}
	std::cout << std::endl;

}

int main() {

	test_vector();
	test_array();

	return 0;
}
