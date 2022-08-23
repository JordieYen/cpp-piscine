#include "Dog.hpp"

Dog::Dog(void)
{
	this->setType("Dog");
}

Dog::~Dog(void){};

void	Dog::makeSound(void) const
{
	std::cout << "woof woof grr\n";
}