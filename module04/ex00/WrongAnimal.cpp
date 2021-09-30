#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "default constructor WrongAnimal\n";
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "destructor WrongAnimal\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	std::cout << "copy constructor WrongAnimal\n";
	*this = wrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal) {
	if (this == &wrongAnimal)
		return *this;
	type = wrongAnimal.type;
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "???\n";
}

std::string WrongAnimal::getType() const {
	return type;
}
