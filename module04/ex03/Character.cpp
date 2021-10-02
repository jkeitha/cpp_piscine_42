#include "Character.hpp"

Character::Character(std::string Name) {
	std::cout << "argument constrcutor Character\n";
}

Character::Character() {
	std::cout << "default constrcutor Character\n";
}

Character::~Character() { std::cout << "destrcutor Character\n"; }

Character::Character(const Character &character) {
	std::cout << "copy constrcutor Character\n";
	*this = character;
}

Character &Character::operator=(const Character &character) {
	std::cout << "operator = Character\n";
	if (this == &character)
		return *this;
	return *this;
}

std::string const &Character::getName() const {}

void Character::equip(AMateria *m) {}

void Character::unequip(int idx) {}

void Character::use(int idx, ICharacter &target) {}
