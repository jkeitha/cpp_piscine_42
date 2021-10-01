#include "Brain.hpp"

Brain::Brain() {
	std::cout << "default constructor Brain\n";
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
