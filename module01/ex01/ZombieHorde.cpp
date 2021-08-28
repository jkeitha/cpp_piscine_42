#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*new_zombie;

	/* C++ 11
	new_zombie = new (std::nothrow) Zombie[N];
	if (new_zombie == nullptr)
	{
		std::cout << "memory error\n";
		return nullptr;
	}
	*/
	try
	{
		new_zombie = new Zombie[N];
	}
	catch (const std::bad_alloc &exception)
	{
		std::cout << "allocation failed: " << exception.what() << std::endl;
		return 0;
	}
	for (int i = 0; i < N; i++)
	{
		// new_zombie[i].set_name(std::to_string(i) + " " + name); // C++ 11
		new_zombie[i].set_name(name);
	}
	return new_zombie;
}
