#include <iostream>
#include "iter.hpp"

void printItem(int &item) {
	std::cout << item << std::endl;
}

void printItem(std::string &item) {
	std::cout << item << std::endl;
}

void changeItem(int &item) {
	item = 1;
}

void changeItem(std::string &item) {
	item = "new word";
}

int main() {

	int int_array[5] = {0, 0, 0, 0, 0};
	std::string str_array[5] = {"word1", "word2", "word3", "word4", "word5"};

	iter(int_array, 5, printItem);
	iter(str_array, 5, printItem);

	std::cout << std::endl;

	iter(int_array, 5, changeItem);
	iter(str_array, 5, changeItem);

	iter(int_array, 5, printItem);
	iter(str_array, 5, printItem);
	return 0;
}
