#include "Dog.hpp"
#include "Cat.hpp"

void subject_check() {
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	delete j; // should not create a leak
	delete i;
}

void check_assing_operator() {
	const Cat *cat1 = new Cat("1");
	Cat *cat2 = new Cat("2");

	cat1->getIdeas(); std::cout << std::endl;
	cat2->getIdeas(); std::cout << std::endl;
	*cat2 = *cat1;
	cat1->getIdeas(); std::cout << std::endl;
	cat2->getIdeas(); std::cout << std::endl;

	delete cat1;
	delete cat2;
}

void check_copy_constructor() {
	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog(*dog1);

	delete dog1;
	delete dog2;
}

void array_of_animals() {
	Animal *animals[4];
	int i;

	for (i = 0; i < 2; i++) {
		animals[i] = new Dog();
		std::cout << std::endl;
	}
	for (; i < 4; i++) {
		animals[i] = new Cat();
		std::cout << std::endl;
	}
	for (i = 0; i < 4; i++) {
		delete animals[i];
		if (i != 3)
			std::cout << std::endl;
	}
}

int	main() {
	subject_check();
	std::cout << std::endl;
	check_assing_operator();
	std::cout << std::endl;
	check_copy_constructor();
	std::cout << std::endl;
	array_of_animals();

	return 0;
}
