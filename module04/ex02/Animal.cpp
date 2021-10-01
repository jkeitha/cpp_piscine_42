#include "Animal.hpp"

Animal::Animal() {
	std::cout << "default constructor Animal\n";
	type = "Animal";
}

Animal::~Animal() {
	std::cout << "destructor Animal\n";
}

Animal::Animal(const Animal &animal) {
	std::cout << "copy constructor Animal\n";
	*this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
	if (this == &animal)
		return *this;
	type = animal.type;
	return *this;
}

std::string Animal::getType() const {
	return type;
}
