#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->setType("WrongCat");
}

WrongCat::~WrongCat(void){};

void	WrongCat::makeSound(void) const
{
	std::cout << "meoooooow~\n";
}