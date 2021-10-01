#include "Cat.hpp"

Cat::Cat() {
	std::cout << "default constructor Cat\n";
	type = "Cat";
	try {
		brain = new Brain;
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
		Cat::~Cat();
	}
	std::cout << "Brain allocated\n";
}

Cat::~Cat() {
	std::cout << "destructor Cat\n";
	if (brain) {
		delete brain;
		std::cout << "Brain deleted\n";
	}
}

Cat::Cat(const Cat &cat) {
	std::cout << "copy constructor Cat\n";
	*this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
	if (this == &cat)
		return *this;
	type = cat.type;
	if (brain) {
		delete brain;
		std::cout << "old Brain deleted\n";
	}
	try {
		brain = new Brain;
	} catch (const std::bad_alloc &exception) {
		std::cout << "allocation failed: " << exception.what() << std::endl;
		Cat::~Cat();
	}
	brain = cat.brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "meow\n";
}
