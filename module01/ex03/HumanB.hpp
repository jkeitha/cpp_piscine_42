#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
	Weapon		*m_weapon;
	std::string	m_name;

	public:
	void		attack();
	void		setWeapon(Weapon &weapon);

	HumanB(const std::string &name);
	~HumanB();
};

#endif
