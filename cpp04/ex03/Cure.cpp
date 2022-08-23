#include "Cure.hpp"

Cure::Cure(void)
{
	this->setType("cure");
}

Cure::Cure(const Cure& clone)
{
	this->setType(clone.getType());
}

Cure&	Cure::operator=(const Cure& clone)
{
	this->setType(clone.getType());
	return (*this);
}

Cure::~Cure(void)
{}

AMateria* Cure::clone() const
{
	AMateria *clone = new Cure();

	return (clone);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}