#include "Cat.hpp"

Cat::Cat() {
	std::cout << "default constructor Cat\n";
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "destructor Cat\n";
}

Cat::Cat(const Cat &cat) {
	std::cout << "copy constructor Cat\n";
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this == &cat)
		return *this;
	type = cat.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meow\n";
}
