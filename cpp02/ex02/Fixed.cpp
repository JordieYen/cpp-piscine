#include "Fixed.hpp"

using std::cout;

Fixed::Fixed()
{
	// cout << "Default constuctor called\n";
	this->fnvalue = 0;
}

Fixed::Fixed(const int input)
{
	// cout << "Int constuctor called\n";
	int	fpn = input;

	fpn <<= this->fractionalbits;
	this->fnvalue = fpn;
}

Fixed::Fixed(const float input)
{
	// cout << "Float constuctor called\n";
	float temp = input * pow(2,this->fractionalbits);
	this->fnvalue = round(temp);
}

Fixed::Fixed(const Fixed &clone)
{
	// cout << "Copy constuctor called\n";
	this->fnvalue = clone.getRawBits();
}

Fixed& Fixed::operator=(const Fixed& clone)
{
	// cout << "Copy assignment operator called\n";
	this->fnvalue = clone.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed& clone) const
{
	if (this->fnvalue > clone.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(const Fixed& clone) const
{
	if (this->fnvalue < clone.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(const Fixed& clone) const
{
	if (this->fnvalue >= clone.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(const Fixed& clone) const
{
	if (this->fnvalue <= clone.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(const Fixed& clone) const
{
	if (this->fnvalue == clone.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(const Fixed& clone) const
{
	if (this->fnvalue != clone.getRawBits())
		return (true);
	else
		return (false);
}

Fixed&	Fixed::operator+(const Fixed& clone) const
{
	float temp = this->toFloat() + clone.toFloat();
	Fixed *ret = new Fixed(temp);

	return (*ret);
}

Fixed&	Fixed::operator-(const Fixed& clone) const
{
	float temp = this->toFloat() - clone.toFloat();
	Fixed *ret = new Fixed(temp);

	return (*ret);
}

Fixed&	Fixed::operator*(const Fixed& clone) const
{
	float temp = this->toFloat() * clone.toFloat();
	Fixed *ret = new Fixed(temp);

	return (*ret);
}

Fixed&	Fixed::operator/(const Fixed& clone) const
{
	float temp = this->toFloat() / clone.toFloat();
	Fixed *ret = new Fixed(temp);

	return (*ret);
}

Fixed&	Fixed::operator++(void)
{
	this->fnvalue++;
	return (*this);
}

Fixed& Fixed::operator--(void)
{
	this->fnvalue--;
	return (*this);
}

Fixed&	Fixed::operator++(int)
{
	Fixed *ret = new Fixed(*this);
	this->fnvalue++;

	return (*ret);
}

Fixed&	Fixed::operator--(int)
{
	Fixed *ret = new Fixed(*this);
	this->fnvalue--;

	return (*ret);
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return (os);
}

Fixed::~Fixed()
{
	// cout << "Destructor called\n";
}

Fixed&	Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

const Fixed&	Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1 > n2)
		return (n1);
	else
		return (n2);
}

Fixed&	Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
}

const Fixed&	Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	else
		return (n2);
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