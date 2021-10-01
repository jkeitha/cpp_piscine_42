#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal {
	protected:
	std::string	type;

	public:
	virtual void makeSound() const = 0;
	std::string getType() const;
	Animal();
	virtual ~Animal();
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
};

#endif
