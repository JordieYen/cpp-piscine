#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point
{
	public:
		Point(void);
		Point(float x, float y);
		Point(const Point &clone);
		Point&	operator=(const Point& clone);
		~Point(void);

		Fixed getX(void) const;
		Fixed getY(void) const;
		float getXFloat(void) const;
		float getYFloat(void) const;

	private:
		Fixed	x;
		Fixed	y;
};

std::ostream&	operator<<(std::ostream& os, const Point& point);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif