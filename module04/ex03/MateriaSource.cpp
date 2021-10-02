#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "default constructor MateriaSource\n";
	for (int i = 0; i < 4; i++)
		m_inventory[i] = 0;
}

MateriaSource::~MateriaSource() {
	std::cout << "destructor MateriaSource\n";
	for (int i = 0; i < 4; i++)
		if (m_inventory[i])
			delete m_inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	std::cout << "copy constructor MateriaSource\n";
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	std::cout << "operator = MateriaSource\n";
	if (this == &materiaSource)
		return *this;
	int i;
	for (i = 0; i < 4; i++)
		if (m_inventory[i])
			delete m_inventory[i];
	for (i = 0; i < 4; i++)
		m_inventory[i] = materiaSource.m_inventory[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *amateria) {
	for (int i = 0; i < 4; i++)
		if (!m_inventory) {
			m_inventory[i] = amateria;
			return ;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (m_inventory[i] && m_inventory[i]->getType() == type)
			return m_inventory[i]->clone();
	return 0;
}
