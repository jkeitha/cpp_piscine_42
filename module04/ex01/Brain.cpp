#include "Brain.hpp"

Brain::Brain() {
	std::cout << "default constructor Brain\n";
	int i = 0;
	while (i < 100) {
		ideas[i] = "default";
		i++;
	}
}

Brain::Brain(std::string idea) {
	std::cout << "argument constructor Brain\n";
	int i = 0;
	while (i < 100) {
		ideas[i] = idea;
		i++;
	}
}

Brain::~Brain() {
	std::cout << "destructor Brain\n";
}

Brain::Brain(const Brain &brain) {
	std::cout << "copy constructor Brain\n";
	*this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
	std::cout << "operator = Brain\n";
	if (this == &brain)
		return *this;
	int i = 0;
	while (i < 100) {
		ideas[i] = brain.ideas[i];
		i++;
	}
	return *this;
}

void Brain::getIdeas() const {
	int i = 0;
	while (i < 100) {
		std::cout << ideas[i];
		if (i != 99)
			std::cout << " ";
		i++;
	}
}
