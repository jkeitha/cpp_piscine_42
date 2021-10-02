#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	private:
	Brain *brain;

	public:
	virtual void makeSound() const;
	void getIdeas() const;
	Dog(std::string idea);
	Dog();
	virtual ~Dog();
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
};

#endif
