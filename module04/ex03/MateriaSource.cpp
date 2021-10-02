#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "default constructor MateriaSource\n";
}

MateriaSource::~MateriaSource() { std::cout << "destructor MateriaSource\n"; }

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	std::cout << "copy constructor MateriaSource\n";
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	std::cout << "operator = MateriaSource\n";
	if (this == &materiaSource)
		return *this;
	return *this;
}

void MateriaSource::learnMateria(AMateria *) {}

AMateria *MateriaSource::createMateria(std::string const &type) {}
