#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << "Animal getType: " << meta->getType() << "\n";
	std::cout << "Dog getType: " << j->getType() << std::endl;
	std::cout << "Cat getType: " << i->getType() << std::endl;

	std::cout << "Animal makeSound: "; meta->makeSound();
	std::cout << "Dog makeSound: "; j->makeSound();
	std::cout << "Cat makeSound: "; i->makeSound(); // will output the cat sound!

	delete meta;
	delete j;
	delete i;

	return 0;
}
