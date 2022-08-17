#include "ClapTrap.hpp"

using std::cout;

ClapTrap::ClapTrap(void)
{
	cout << "Default constuctor called\n";
	this->name = "NoNameTrap";
	this->setHp(10);
	this->setEp(10);
	this->setAd(0);
}

ClapTrap::ClapTrap(string name)
{
	cout << "String constuctor called\n";
	this->name = name;
	this->setHp(10);
	this->setEp(10);
	this->setAd(0);
}

ClapTrap::ClapTrap(const ClapTrap& clone)
{
	cout << "Copy constuctor called\n";
	this->name = clone.getName();
	this->setHp(clone.getHp());
	this->setEp(clone.getEp());
	this->setAd(clone.getAd());
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clone)
{
	cout << "Copy assignment operator called\n";
	this->name = clone.getName();
	this->setHp(clone.getHp());
	this->setEp(clone.getEp());
	this->setAd(clone.getAd());
	
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	cout << "Destructor called\n";
}

void	ClapTrap::attack(string name)
{
	cout << "ClapTrap <" << this->name << "> attacks <" << name << ">, causing <" << this->attackDamage << "> points of damage!\n";
}

void	ClapTrap::attack(ClapTrap& claptrap)
{
	cout << "ClapTrap <" << this->name << "> attacks <" << claptrap.getName() << ">, causing <" << this->attackDamage << "> points of damage!\n";
	claptrap.takeDamage(this->attackDamage);
}

void	ClapTrap::takeDamage(int amount)
{
	cout << "ClapTrap <" << this->name << "> took " << amount << " damage.\n";
	if (this->hitPoints > amount)
		this->hitPoints  -= amount;
	else
		this->hitPoints = 0;
}

void	ClapTrap::beRepaired(int amount)
{
	cout << "ClapTrap <" << this->name << "> is repaired, healed " << amount << " hit points.\n";
	this->hitPoints += amount;
}

string	ClapTrap::getName(void) const
{
	return(this->name);
}

int		ClapTrap::getHp(void) const
{
	return (this->hitPoints);
}

int		ClapTrap::getEp(void) const
{
	return (this->energyPoints);
}

int		ClapTrap::getAd(void) const
{
	return (this->attackDamage);
}

void	ClapTrap::setHp(int amount)
{
	this->hitPoints = amount;
}

void	ClapTrap::setEp(int amount)
{
	this->energyPoints = amount;
}

void	ClapTrap::setAd(int amount)
{
	this->attackDamage = amount;
}