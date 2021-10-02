#include "Ice.hpp"

Ice::Ice() {
	std::cout << "default constructor Ice\n";
}

Ice::~Ice() { std::cout << "destructor Ice\n"; }

Ice::Ice(const Ice &ice) {
	std::cout << "copy constructor Ice\n";
	*this = ice;
}

Ice &Ice::operator=(const Ice &ice) {
	std::cout << "operator = Ice\n";
	if (this == &ice)
		return *this;
	return *this;
}

AMateria *Ice::clone() const {}
