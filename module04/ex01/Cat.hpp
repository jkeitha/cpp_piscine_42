#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
	private:
	Brain *brain;

	public:
	virtual void makeSound() const;
	void getIdeas() const;
	Cat(std::string idea);
	Cat();
	virtual ~Cat();
	Cat(const Cat &cat);
	Cat &operator=(const Cat &cat);
};

#endif
