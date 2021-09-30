#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	public:
	virtual void makeSound() const;
	Cat();
	virtual ~Cat();
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
};

#endif
