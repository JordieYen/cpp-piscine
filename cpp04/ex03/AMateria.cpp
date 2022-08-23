#include "AMateria.hpp"

AMateria::AMateria(void)
{}

AMateria::AMateria(string type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& clone)
{
	this->type = clone.getType();
}

AMateria&	AMateria::operator=(const AMateria& clone)
{
	this->type = clone.getType();

	return (*this);
}

AMateria::~AMateria(void)
{
}

string const & AMateria::getType() const
{
	return (this->type);
}

void			AMateria::setType(string type)
{
	this->type = type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "weapon used at " << target.getName() << ".\n";
}