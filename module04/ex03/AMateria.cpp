#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) {
	std::cout << "argument constructor AMateria\n";
	m_type = type;
}

AMateria::AMateria() {
	std::cout << "default constructor AMateria\n";
	m_type = "default";
}

AMateria::~AMateria() { std::cout << "destructor AMateria\n"; }

AMateria::AMateria(const AMateria &amateria) {
	std::cout << "copy constructor AMateria\n";
	*this = amateria;
}

AMateria &AMateria::operator=(const AMateria &amateria) {
	std::cout << "operator = AMateria\n";
	if (this == &amateria)
		return *this;
	m_type = amateria.getType();
	return *this;
}

std::string const &AMateria::getType() const { return m_type; }

void AMateria::use(ICharacter &target) {}
