#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->setName(name);
	this->setWeapon(weapon);
}

HumanA::~HumanA(void){}

void		HumanA::setName(std::string name)
{
	this->name = name;
}

std::string	HumanA::getName(void)
{
	return(this->name);
}

void		HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

Weapon*		HumanA::getWeapon(void)
{
	return(this->weapon);
}

void		HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << "\n";
}