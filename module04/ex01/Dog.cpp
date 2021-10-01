#include "Dog.hpp"

Dog::Dog() {
	std::cout << "default constructor Dog\n";
	type = "Dog";
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
	*this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
	if (this == &dog)
		return *this;
	type = dog.type;
	if (brain) {
		delete brain;
		std::cout << "old Brain deleted\n";
	}
	try {
		brain = new Brain;
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
		Dog::~Dog();
	}
	brain = dog.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "woof\n";
}
