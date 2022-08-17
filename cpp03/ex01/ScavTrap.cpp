#include "ScavTrap.hpp"

using std::cout;

ScavTrap::ScavTrap(void)
{
	cout << "ScavTrap Default constuctor called\n";
	this->setName("NoNameScavTrap");
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap(string name)
{
	cout << "ScavTrap String constuctor called\n";
	this->setName(name);
	this->setHp(100);
	this->setEp(50);
	this->setAd(20);
}

ScavTrap::ScavTrap(const ScavTrap& clone)
{
	cout << "ScavTrap Copy constuctor called\n";
	this->setName(clone.getName());
	this->setHp(clone.getHp());
	this->setEp(clone.getEp());
	this->setAd(clone.getAd());
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& clone)
{
	cout << "ScavTrap Copy constuctor called\n";
	this->setName(clone.getName());
	this->setHp(clone.getHp());
	this->setEp(clone.getEp());
	this->setAd(clone.getAd());

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	cout << "ScavTrap Destructor called\n";
}

void	ScavTrap::guardGate(void)
{
	cout << "ScavTrap <" << this->getName() << "> is now in Gate Keeper Mode!\n";
}

void	ScavTrap::attack(string name)
{
	cout << "ScavTrap <" << this->getName() << "> attackssssss <" << name << ">\n";
}

void	ScavTrap::attack(ScavTrap& scavtrap)
{
	cout << "ScavTrap <" << this->getName() << "> attackssssss <" << scavtrap.getName() << ">\n";
	scavtrap.takeDamage(this->getAd());
}