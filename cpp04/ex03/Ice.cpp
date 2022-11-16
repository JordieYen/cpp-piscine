#include "Ice.hpp"

Ice::Ice(void)
{
	this->setType("ice");
}

Ice::Ice(const Ice& clone)
{
	this->setType(clone.getType());
}

Ice&	Ice::operator=(const Ice& clone)
{
	this->setType(clone.getType());
	return (*this);
}

Ice::~Ice(void)
{}

AMateria* Ice::clone() const
{
	AMateria *clone = new Ice();

	return (clone);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}