#include "Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "wrong input\n";
		return 1;
	}
	Zombie	*dynamic_zombie;

	std::cout << "dynamic:\n";
	dynamic_zombie = newZombie(argv[1]);
	if (dynamic_zombie == nullptr)
		return 1;
	dynamic_zombie->announce();

	std::cout << "\nstatic:\n";
	randomChump(argv[1]);

	std::cout << std::endl;
	delete dynamic_zombie;
	return 0;
}
