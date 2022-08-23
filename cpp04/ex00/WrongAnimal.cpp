#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->setType("undefined species");
}

WrongAnimal::WrongAnimal(string type)
{
	this->setType(type);
}

WrongAnimal::WrongAnimal(const WrongAnimal& clone)
{
	this->setType(clone.getType());
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& clone)
{
	this->setType(clone.getType());

	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
}

void	WrongAnimal::setType(string type)
{
	this->type = type;
}

string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Random animal sound\n";
}