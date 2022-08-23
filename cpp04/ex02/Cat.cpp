#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat constructor called\n";
	this->setType("Cat");

	this->brain = new Brain();
}

Cat::Cat(const Cat& clone)
{
	std::cout << "Cat copy constructor called\n";
	*this = clone;
}

Cat&	Cat::operator=(const Cat& clone)
{
	
	this->brain = new Brain(*clone.brain);
	this->setType(clone.getType());

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "meoooooow~\n";
}

Brain&	Cat::getBrain(void)
{
	return (*this->brain);
}