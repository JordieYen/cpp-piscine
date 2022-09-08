#include <iostream>
#include "template.hpp"
using std::cout;
using std::endl;

int	main(void)
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << "\n" << std::endl;

	int		x = 10;
	int		y = 42;
	float	xf = 10.01;
	float	yf = 42.42;

	cout << "integer test :\nx = " << x << "\ny = " << y << endl;

	swap<int>(x, y);

	cout << "swap was called.\nx = " << x << "\ny = " << y << "\n" << endl;
	cout << "float test :\nx = " << xf << "\ny = " << yf << endl;

	swap<float>(xf, yf);

	cout << "swap was called.\nx = " << xf << "\ny = " << yf << "\n" << endl;

	cout << "-------Min test------ \ninteger test :\nx = " << x << "\ny = " << y << endl;

	int	small = min<int>(x, y);
	cout << "min of numbers : " << small << "\n" << endl;

	cout << "float test :\nx = " << xf << "\ny = " << yf << endl;

	float smallf = min<float>(xf, yf);
	cout << "min of numbers : " << smallf << "\n" << endl;

	cout << "-------Max test------ \ninteger test :\nx = " << x << "\ny = " << y << endl;

	int	big = max<int>(x, y);
	cout << "max of numbers : " << big << "\n" << endl;

	cout << "float test :\nx = " << xf << "\ny = " << yf << endl;

	float bigf = max<float>(xf, yf);
	cout << "max of numbers : " << bigf << "\n" << endl;

	return (0);
}