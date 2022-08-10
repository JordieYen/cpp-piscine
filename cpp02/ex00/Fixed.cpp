#include "Fixed.hpp"

using std::cout;

Fixed::Fixed()
{
	cout << "Default constuctor called\n";
	this->fnvalue = 0;
}

Fixed::Fixed(const Fixed &clone)
{
	cout << "Copy constuctor called\n";
	this->fnvalue = clone.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& clone)
{
	cout << "Copy assignment operator called\n";
	this->fnvalue = clone.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	cout << "Destructor called\n";
}

int	Fixed::getRawBits(void) const
{
	cout << "getRawBits member function called\n";
	return (this->fnvalue);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called\n";
	this->fnvalue = raw;
}