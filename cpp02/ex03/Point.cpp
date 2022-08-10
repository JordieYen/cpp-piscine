#include "Point.hpp"

Point::Point(void)
{
	this->x.setRawBits(0);
	this->y.setRawBits(0);
}

Point::Point(float x, float y)
{
	Fixed tempx(x), tempy(y);

	this->x.setRawBits(tempx.getRawBits());
	this->y.setRawBits(tempy.getRawBits());
}

Point::Point(const Point& clone)
{
	this->x = clone.getX();
	this->y = clone.getY();
}

Point&	Point::operator=(const Point& clone)
{
	this->x = clone.getX();
	this->y = clone.getY();
	return (*this);
}

Point::~Point(void)
{
}

Fixed Point::getX(void) const
{
	return (this->x);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

float Point::getXFloat(void) const
{
	return (this->x.toFloat());
}
float Point::getYFloat(void) const
{
	return (this->y.toFloat());
}

std::ostream&	operator<<(std::ostream& os, const Point& point)
{
	os << "(" << point.getX() << ", " << point.getY() << ")";
	return (os);
}