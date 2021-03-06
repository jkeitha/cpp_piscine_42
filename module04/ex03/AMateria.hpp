#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;

# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	protected:
	std::string m_type;

	public:
	AMateria(std::string const &type);
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria &amateria);
	AMateria &operator=(const AMateria &amateria);

	std::string const &getType() const; // returns the materia type

	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
