#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
using std::string;

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(string name);
		ClapTrap(const ClapTrap& clone);
		ClapTrap&	operator=(const ClapTrap& clone);
		~ClapTrap(void);

		void	attack(string name);
		void	attack(ClapTrap& claptrap);
		void	takeDamage(int amount);
		void	beRepaired(int amount);
		string	getName(void) const;
		int		getHp(void) const;
		int		getEp(void) const;
		int		getAd(void) const;
		void	setHp(int amount);
		void	setEp(int amount);
		void	setAd(int amount);

	private:
		string	name;
		int		hitPoints;
		int		energyPoints;
		int		attackDamage;
};

#endif