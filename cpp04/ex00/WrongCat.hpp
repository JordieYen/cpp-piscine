#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

using std::string;

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		~WrongCat(void);

		void	makeSound(void) const;

};

#endif