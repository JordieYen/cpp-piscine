#include "Point.hpp"
#include <cmath>

using std::cout;

float	calculateDistance(Point point1, Point point2)
{
	float x1 = point1.getXFloat();
	float y1 = point1.getYFloat();
	float x2 = point2.getXFloat();
	float y2 = point2.getYFloat();

    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

float area(const Point point1, const Point point2, const Point point3)
{
	float x1 = point1.getXFloat();
	float y1 = point1.getYFloat();
	float x2 = point2.getXFloat();
	float y2 = point2.getYFloat();
	float x3 = point3.getXFloat();
	float y3 = point3.getYFloat();

	return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool	checkIfOnLine(Point const a, Point const b, Point const c, Point const point)
{
	if (calculateDistance(a, point) + calculateDistance(b, point) == calculateDistance(a, b))
		return (true);
	else if (calculateDistance(b, point) + calculateDistance(c, point) == calculateDistance(b, c))
		return (true);
	else if (calculateDistance(c, point) + calculateDistance(a, point) == calculateDistance(c, a))
		return (true);
	return (false);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float A = area (a, b, c);
	float A1 = area (point, b, c);
	float A2 = area (a, point, c);
	float A3 = area (a, b, point);

	if (checkIfOnLine(a, b, c, point))
		return (false);

	return (A == (A1 + A2 + A3));
}