#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

// class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& clone);
		MateriaSource&	operator=(const MateriaSource& clone);
		~MateriaSource();

		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const & type);

	private:
		AMateria	*spellbook[4];
		int			index;
};

#endif