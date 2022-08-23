#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
using std::string;

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& clone);
		Ice&	operator=(const Ice& clone);
		~Ice(void);

		virtual			AMateria* clone() const;
		virtual	void	use(ICharacter& target);

};

#endif