#include "FragTrap.hpp"

using std::cout;

FragTrap::FragTrap(void)
{
	cout << "FragTrap Default constuctor called\n";
	this->setName("NoNameFragTrap");
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}

FragTrap::FragTrap(string name)
{
	cout << "FragTrap String constuctor called\n";
	this->setName(name);
	this->setHp(100);
	this->setEp(100);
	this->setAd(30);
}

FragTrap::FragTrap(const FragTrap& clone)
{
	cout << "FragTrap Copy constuctor called\n";
	this->setName(clone.getName());
	this->setHp(clone.getHp());
	this->setEp(clone.getEp());
	this->setAd(clone.getAd());
}

FragTrap&	FragTrap::operator=(const FragTrap& clone)
{
	cout << "FragTrap Copy constuctor called\n";
	this->setName(clone.getName());
	this->setHp(clone.getHp());
	this->setEp(clone.getEp());
	this->setAd(clone.getAd());

	return (*this);
}

FragTrap::~FragTrap(void)
{
	cout << "FragTrap Destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	cout << "FragTrap <" << this->getName() << "> requesting highfives!\n";
}