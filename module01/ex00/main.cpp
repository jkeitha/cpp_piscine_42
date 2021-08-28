#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main()
{
	Zombie				*dynamic_zombie;
	const std::string	name = "Stiv";

	std::cout << "dynamic:\n";
	dynamic_zombie = newZombie(name);
	/* C++ 11
	if (dynamic_zombie == nullptr)
		return 1;
	*/
	if (!dynamic_zombie)
		return 1;
	dynamic_zombie->announce();

	std::cout << "\nstatic:\n";
	randomChump(name);

	std::cout << std::endl;
	delete dynamic_zombie;
	return 0;
}
