#include "Fixed.hpp"

using std::cout;

Fixed::Fixed()
{
	cout << "Default constuctor called\n";
	this->fnvalue = 0;
}

Fixed::Fixed(const int input)
{
	cout << "Int constuctor called\n";
	int	fpn = input;

	fpn <<= this->fractionalbits;
	this->fnvalue = fpn;
}

Fixed::Fixed(const float input)
{
	cout << "Float constuctor called\n";
	float temp = input * pow(2,this->fractionalbits);
	this->fnvalue = round(temp);
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

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	cout << "Destructor called\n";
}

int		Fixed::toInt(void) const
{
	int	ret = this->fnvalue;

	ret >>= this->fractionalbits;
	return (ret);
}

float	Fixed::toFloat(void) const
{
	float temp = this->fnvalue;

	temp /= pow(2, this->fractionalbits);
	return (temp);
}

int	Fixed::getRawBits(void) const
{
	return (this->fnvalue);
}

int		Fixed::getFractionalBits(void) const
{
	return (this->fractionalbits);
}

void	Fixed::setRawBits(int const raw)
{
	cout << "setRawBits member function called\n";
	this->fnvalue = raw;
}