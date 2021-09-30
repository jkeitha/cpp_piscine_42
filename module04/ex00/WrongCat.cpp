#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "default constructor WrongCat\n";
	type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "destructor WrongCat\n";
}

WrongCat::WrongCat(const WrongCat &wrongCat) {
	std::cout << "copy constructor WrongCat\n";
	*this = wrongCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat) {
	if (this == &wrongCat)
		return *this;
	type = wrongCat.type;
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "meow\n";
}
