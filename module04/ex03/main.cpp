#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

void subject_check() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void test1() {
	AMateria *ice1 = new Ice();
	AMateria *ice2 = ice1->clone();

	delete ice1;
	delete ice2;
}

void test2() {
	ICharacter *character1 = new Character("Stiv");
	ICharacter *character2 = new Character("Jeff");

	character1->getName();
	character2->getName();

	AMateria *ice1 = new Ice();
	AMateria *ice2 = new Ice();

	character1->equip(ice1);

	character2->equip(ice2);
	character2->unequip(0);

	delete character1;
	delete character2;
	delete ice2;
}

int main() {
	subject_check();
	std::cout << std::endl;
	test1();
	std::cout << std::endl;
	test2();
	return 0;
}
