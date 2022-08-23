#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called\n";
	this->setType("undefined species");
}

Animal::Animal(string type)
{
	this->setType(type);
}

Animal::Animal(const Animal& clone)
{
	this->setType(clone.getType());
}

Animal&	Animal::operator=(const Animal& clone)
{
	this->setType(clone.getType());

	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

void	Animal::setType(string type)
{
	this->type = type;
}

string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Random animal sound\n";
}