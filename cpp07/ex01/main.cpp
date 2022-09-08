#include <iostream>
using std::cout;
using std::endl;
using std::string;
#include "iter.hpp"

void	increment(int &x)
{
	x++;
}

void	addPle(string &str)
{
	str += "ple";
}

int	main(void)
{
	int	box[5] = {1, 2, 3, 4, 5};

	cout << "box = { ";
	for (int i = 0; i < 5; i++)
		cout << box[i] << " ";
	cout << "}\n";

	::iter(box, 5, increment);

	cout << "box = { ";
	for (int i = 0; i < 5; i++)
		cout << box[i] << " ";
	cout << "}\n";


	string	array2d[5] = {"ap", "bo", "je", "bru", "lo"};

	cout << "array2d = { ";
	for (int i = 0; i < 5; i++)
		cout << array2d[i] << " ";
	cout << "}\n";

	::iter(array2d, 5, addPle);

	cout << "array2d = { ";
	for (int i = 0; i < 5; i++)
		cout << array2d[i] << " ";
	cout << "}\n";

	return (0);
}