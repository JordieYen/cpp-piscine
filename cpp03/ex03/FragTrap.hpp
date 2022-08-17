#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(string name);
		FragTrap(const FragTrap& clone);
		FragTrap&	operator=(const FragTrap& clone);
		~FragTrap(void);

		void highFivesGuys(void);
};

#endif