#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zombie;

	/* C++ 11
	new_zombie = new (std::nothrow) Zombie;
	if (new_zombie == nullptr)
	{
		std::cout << "memory error\n";
		return nullptr;
	}
	*/
	new_zombie = new Zombie;
	new_zombie->set_name(name);
	new_zombie->set_message("dynamic");
	return new_zombie;
}
