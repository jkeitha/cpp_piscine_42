#include "Dog.hpp"

Dog::Dog() {
	std::cout << "default constructor Dog\n";
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "destructor Dog\n";
}

Dog::Dog(const Dog &dog) {
	std::cout << "copy constructor Dog\n";
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this == &dog)
		return *this;
	type = dog.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "woof\n";
}
