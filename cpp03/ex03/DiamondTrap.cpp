#include "DiamondTrap.hpp"

using std::cout;

DiamondTrap::DiamondTrap(string name)
{
	cout << "DiamondTrap String constuctor called\n";
	this->name = name;
	this->ClapTrap::setName(name + "_clap_name");
	this->setHp(FragTrap::getHp());
	this->setEp(ScavTrap::getEp());
	this->setAd(FragTrap::getAd());
}

DiamondTrap::~DiamondTrap(void)
{
	cout << "DiamondTrap Destructor called\n";
}

void	DiamondTrap::attack(string name)
{
	this->ScavTrap::attack(name);
}

void DiamondTrap::whoAmI(void)
{
	cout << "Who am i? "<< this->name << "? or " << this->ClapTrap::getName() << "? Honestly, I dont know.\n";
}