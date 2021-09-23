#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Stiv;

	std::cout << Stiv.get_Name() << std::endl;
	std::cout << Stiv.get_Hitpoints() << std::endl;
	std::cout << Stiv.get_Energy_points() << std::endl;
	std::cout << Stiv.get_Attack_damage() << std::endl;
	Stiv.attack("Woz");

	FragTrap	Mike("Jose");

	Mike.highFivesGuys();
	std::cout << Mike.get_Name() << std::endl;
	std::cout << Mike.get_Hitpoints() << std::endl;
	std::cout << Mike.get_Energy_points() << std::endl;
	std::cout << Mike.get_Attack_damage() << std::endl;
	Mike.attack("Sierra");
	return 0;
}
