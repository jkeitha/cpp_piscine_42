#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int	main()
{
	Zombie				*dynamic_zombie;
	const int			N = 5;
	const std::string	name = "Stiv";

	std::cout << "alloc memory:\n";
	dynamic_zombie = zombieHorde(N, name);
	for(int i = 0; i < N; i++)
	{
		dynamic_zombie[i].announce();
	}
	std::cout << "\nfree memory:\n";
	delete[] dynamic_zombie;
	return 0;
}
