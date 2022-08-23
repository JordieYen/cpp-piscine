#include "Cat.hpp"

Cat::Cat(void)
{
	this->setType("Cat");
}

Cat::~Cat(void){};

void	Cat::makeSound(void) const
{
	std::cout << "meoooooow~\n";
}