#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	// it is impossible to create an object of an abstract class
	// const Animal* meta = new Animal();

    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << "Dog getType: " << j->getType() << std::endl;
	std::cout << "Cat getType: " << i->getType() << std::endl;

	std::cout << "Dog makeSound: "; j->makeSound();
	std::cout << "Cat makeSound: "; i->makeSound(); // will output the cat sound!

	delete j;
	delete i;

	return 0;
}
