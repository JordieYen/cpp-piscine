#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
using std::string;

class AMateria
{
	public:
		AMateria(void);
		AMateria(string type);
		AMateria(const AMateria& clone);
		AMateria&	operator=(const AMateria& clone);
		~AMateria(void);

		string			const & getType() const;
		void			setType(string type);
		virtual			AMateria* clone() const = 0;
		virtual	void	use(ICharacter& target);

	protected:
		string	type;

};

#endif