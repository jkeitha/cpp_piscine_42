#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {
	private:
	std::string m_Name;
	AMateria *m_inventory[4];

	public:
	Character(std::string Name);
	Character();
	virtual ~Character();
	Character(const Character &character);
	Character &operator=(const Character &character);

	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
};

#endif
