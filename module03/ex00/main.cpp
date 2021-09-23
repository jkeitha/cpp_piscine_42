#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Stiv;
	ClapTrap	Jeff("Jeff");

	Stiv.attack("Woz");
	Jeff.attack("Gates");
	Stiv.takeDamage(5);
	Jeff.takeDamage(7);
	Stiv.attack("Woz");
	Jeff.attack("Gates");
	Stiv.beRepaired(3);
	Jeff.beRepaired(8);
	return 0;
}
