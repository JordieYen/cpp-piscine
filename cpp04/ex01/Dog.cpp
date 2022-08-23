#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog constructor called\n";
	this->setType("Dog");

	this->brain = new Brain();
}

Dog::Dog(const Dog& clone)
{
	std::cout << "Dog copy constructor called\n";
	*this = clone;
}

Dog&	Dog::operator=(const Dog& clone)
{
	this->brain = new Brain(*clone.brain);
	this->setType(clone.getType());

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof grr\n";
}

Brain&	Dog::getBrain(void)
{
	return (*this->brain);
}