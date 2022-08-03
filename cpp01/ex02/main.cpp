#include <iostream>

using std::cout;
using std::string;

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "\nString Address from str = " << &str << "\n";
	cout << "String Address from stringPTR = " << stringPTR << "\n";
	cout << "String Address from stringREF = " << &stringREF << "\n\n";

	cout << "String from str = " << str << "\n";
	cout << "String from stringPTR = " << *stringPTR << "\n";
	cout << "String from stringREF = " << stringREF << "\n\n";
	return (0);
}