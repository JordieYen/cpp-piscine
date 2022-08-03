#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);

		void		setName(std::string name);
		std::string	getName(void);
		void		setWeapon(Weapon &weapon);
		Weapon*		getWeapon(void);
		void		attack(void);

	private:
		std::string	name;
		Weapon		*weapon;
};

#endif