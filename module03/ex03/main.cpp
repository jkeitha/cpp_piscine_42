#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap	DT("death");

	DT.whoAmI();
	std::cout << DT.FragTrap::get_Hitpoints() << std::endl;
	std::cout << DT.ScavTrap::get_Energy_points() << std::endl;
	std::cout << DT.FragTrap::get_Attack_damage() << std::endl;
	DT.ScavTrap::attack("target");
	return 0;
}
