#include "Character.hpp"

Character::Character(std::string Name) {
	std::cout << "argument constrcutor Character\n";
	m_Name = Name;
	for (int i = 0; i < 4; i++)
		m_inventory[i] = 0;
}

Character::Character() {
	std::cout << "default constrcutor Character\n";
	m_Name = "default";
	for (int i = 0; i < 4; i++)
		m_inventory[i] = 0;
}

Character::~Character() {
	std::cout << "destrcutor Character\n";
	for (int i = 0; i < 4; i++)
		if (m_inventory[i])
			delete m_inventory[i];
}

Character::Character(const Character &character) {
	std::cout << "copy constrcutor Character\n";
	*this = character;
}

Character &Character::operator=(const Character &character) {
	std::cout << "operator = Character\n";
	if (this == &character)
		return *this;
	m_Name = character.getName();
	int i;
	for (i = 0; i < 4; i++)
		if (m_inventory[i])
			delete m_inventory[i];
	for (i = 0; i < 4; i++)
		m_inventory[i] = character.m_inventory[i]->clone();
	return *this;
}

std::string const &Character::getName() const { return m_Name; }

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++)
		if (!m_inventory[i]) {
			m_inventory[i] = m;
			return ;
		}
}

void Character::unequip(int idx) { m_inventory[idx] = 0; }

void Character::use(int idx, ICharacter &target) {
	m_inventory[idx]->use(target);
}
