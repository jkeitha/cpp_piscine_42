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
	if (this == &brain)
		return *this;
	return *this;
}
