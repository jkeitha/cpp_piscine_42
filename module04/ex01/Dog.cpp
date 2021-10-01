#include "Dog.hpp"

Dog::Dog() {
	std::cout << "default constructor Dog\n";
	type = "Dog";
	brain = 0;
	try {
		brain = new Brain;
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
		Dog::~Dog();
	}
	std::cout << "Brain allocated\n";
}

Dog::~Dog() {
	std::cout << "destructor Dog\n";
	if (brain) {
		delete brain;
		std::cout << "Brain deleted\n";
	}
}

Dog::Dog(const Dog &dog) {
	std::cout << "copy constructor Dog\n";
	brain = 0;
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	std::cout << "operator = Dog\n";
	if (this == &dog)
		return *this;
	type = dog.type;
	if (brain) {
		delete brain;
		std::cout << "old Brain deleted\n";
		brain = 0;
	}
	try {
		brain = new Brain;
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
		Dog::~Dog();
	}
	std::cout << "Brain allocated\n";
	*brain = *dog.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "woof\n";
}
