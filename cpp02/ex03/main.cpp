#include "Point.hpp"

using std::cout;

int	main(void)
{
	Point a(1, 5);
	Point b(1, 1);
	Point c(5, 1);
	Point point(2, 4);
	
	cout << "\na " << a << "\n";
	cout << "b " << b << "\n";
	cout << "c " << c << "\n";
	cout << "point " << point << "\n\n";

	if (bsp(a, b, c, point))
		cout << "< point is in triangle! >\n\n";
	else
		cout << "< point is not in triangle! >\n\n";

	return (0);
}