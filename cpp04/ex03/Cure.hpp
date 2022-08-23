#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"
using std::string;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& clone);
		Cure&	operator=(const Cure& clone);
		~Cure(void);

		virtual			AMateria* clone() const;
		virtual	void	use(ICharacter& target);

};

#endif