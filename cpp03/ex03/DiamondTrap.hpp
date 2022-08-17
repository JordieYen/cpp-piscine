#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

using std::string;

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(string name);
		~DiamondTrap(void);

		void	whoAmI(void);
		void	attack(string name);

	private:
		string name;
};

#endif