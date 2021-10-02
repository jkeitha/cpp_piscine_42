#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	MateriaSource &operator=(const MateriaSource &materiaSource);

	virtual void learnMateria(AMateria *);
	virtual AMateria *createMateria(std::string const &type);
};

#endif
