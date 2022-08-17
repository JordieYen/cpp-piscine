#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string;

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(string name);
		ScavTrap(const ScavTrap& clone);
		ScavTrap&	operator=(const ScavTrap& clone);
		~ScavTrap(void);

		void	attack(string name);
		void	attack(ScavTrap& scavtrap);
		void	guardGate(void);
};

#endif