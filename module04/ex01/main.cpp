#include "Dog.hpp"
#include "Cat.hpp"

void subject_check()
{
	const Animal* j = new Dog();
    const Animal* i = new Cat();

	delete j; // should not create a leak
	delete i;
}

void check_assing_operator()
{
	const Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();

	*cat2 = *cat1;

	delete cat1;
	delete cat2;
}

void check_copy_constructor()
{
	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog(*dog1);

	delete dog1;
	delete dog2;
}

int	main()
{
	subject_check();
	std::cout << std::endl;
	check_assing_operator();
	std::cout << std::endl;
	check_copy_constructor();

	return 0;
}
