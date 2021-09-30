#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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

	std::cout << std::endl;

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_i = new WrongCat();

	std::cout << "WrongAnimal getType: " << wrong_meta->getType() << "\n";
	std::cout << "WrongCat getType: " << wrong_i->getType() << std::endl;

	std::cout << "WrongAnimal makeSound: "; wrong_meta->makeSound();
	std::cout << "WrongCat makeSound: "; wrong_i->makeSound();

	delete wrong_meta;
	delete wrong_i;

	return 0;
}
