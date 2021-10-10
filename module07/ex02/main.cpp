#include <iostream>
#include "Array.hpp"

int main() {
	Array <int> array (5);

	int size = array.size();
	std::cout << "size: " << size << std::endl;

	int *array_ptr = array.getArray();
	std::cout << "items:\n";
	for (int i = 0; i < size; i++)
		std::cout << array_ptr[i] << std::endl;

	try {
		const int index = 5;
		std::cout << "index " << index << " -> " << array.operator[](index) << std::endl;
	} catch (std::exception &e) {
		std::cout << "exception: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	Array <int> copy_array (3);
	size = copy_array.size();
	std::cout << "size: " << size << std::endl;
	copy_array = array;
	size = copy_array.size();
	std::cout << "size: " << size << std::endl;

	std::cout << std::endl;
	Array <int> array2 = Array <int> ();

	return 0;
}
