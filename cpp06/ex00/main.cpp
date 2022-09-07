#include <iostream>

using std::cout;
using std::string;
using std::endl;

bool	checkIfValid(char needle, string haystack)
{
	for (int i = 0; i < haystack.length(); i++)
	{
		if (haystack[i] == needle)
			return (true);
	}
	return (false);
}

string	eraseFirstChar(char c, string input, int idx)
{
	if (idx < input.length() - 1)
	{
		while (1)
		{
			if (input[idx] == c)
				input.erase(idx, 1);
			else
				break;
		}
	}
	return (input);
}

void	checkIfChar(string input)
{
	string	temp;
	string	impossiples[] = {"nan", "nanf", "-inff", "-inf", "+inff", "+inf"};

	if (input.length() > 1)
	{
		temp = "'*'";
		for (int i = 0; i < 6; i++)
		{
			if (input.compare(impossiples[i]) == 0)
				temp = "impossiple";
		}
	}
	else
	{
		if (input[0] < 32 && input[0] > 126)
			temp = "char is not printable";
		if (input[0] >= 48 && input[0] <= 57)
			temp = "non displayable";
		else
			temp = input;
	}
	cout << "char   : " << temp << endl;
}

bool	checkIfNumber(string& input)
{
	string	temp = input;

	int dotCount = 0;
    for (int i = 0; (i = input.find('.', i)) != std::string::npos; i++)
        dotCount++;
	if (dotCount > 1)
		return (false);
	if (temp[0] == '-')
		temp.erase(0, 1);
	if (temp[temp.length() - 1] == 'f')
		temp.erase(temp.length() - 1, temp.length());
	for (int i = 0; i < temp.length(); i++)
	{
		if (!(temp[i] >= 48 && temp[i] <= 57) && temp[i] != '.')
			return (false);
		if (temp[i] == '.' && i == temp.length() - 1)
			return (false);
	}
	return (true);
}

void	checkIfInt(string input)
{
	string	temp;
	string	impossiples[] = {"nan", "nanf", "-inff", "-inf", "+inff", "+inf"};
	int		isnegative  = 0;

	if (checkIfNumber(input))
	{
		temp = input;
		if (temp[0] == '-')
			isnegative = true;
		temp = eraseFirstChar('0', temp, 0 + isnegative);
		if (temp[temp.length() - 1] == 'f')
			temp.erase(temp.length() - 1, temp.length());
		if (checkIfValid('.', temp))
			temp.erase(temp.find('.', 0), temp.length());
	}
	else
		temp = "non displayable";
	for (int i = 0; i < 6; i++)
	{
		if (input.compare(impossiples[i]) == 0)
			temp = "impossiple";
	}
	cout << "int    : " << temp << endl;
}

void	checkIfFloat(string input)
{
	string	temp;
	string	impossiplesFloat[] = {"nanf", "-inff", "+inff"};
	string	impossiplesDouble[] = {"nan", "-inf", "+inf"};
	int		isnegative  = 0;

	if (checkIfNumber(input))
	{
		temp = input;
		if (temp[0] == '-')
			isnegative = true;
		temp = eraseFirstChar('0', temp, 0 + isnegative);
		if (!checkIfValid('.', temp))
			temp += ".0";
		if (temp[temp.length() - 1] != 'f')
			temp += 'f';
	}
	else
		temp = "non displayable";
	for (int i = 0; i < 3; i++)
	{
		if (input.compare(impossiplesFloat[i]) == 0)
			temp = impossiplesFloat[i];
		if (input.compare(impossiplesDouble[i]) == 0)
			temp = impossiplesFloat[i];
	}
	cout << "float  : " << temp << endl;
}

void	checkIfDouble(string input)
{
	string	temp;
	string	impossiplesFloat[] = {"nanf", "-inff", "+inff"};
	string	impossiplesDouble[] = {"nan", "-inf", "+inf"};
	int		isnegative  = 0;

	if (checkIfNumber(input))
	{
		temp = input;
		if (temp[0] == '-')
			isnegative = 1;
		temp = eraseFirstChar('0', temp, 0 + isnegative);
		if (temp[temp.length() - 1] == 'f')
			temp.erase(temp.length() - 1, temp.length());
		if (!checkIfValid('.', temp))
			temp += ".0";
	}
	else
		temp = "non displayable";
	for (int i = 0; i < 3; i++)
	{
		if (input.compare(impossiplesFloat[i]) == 0)
			temp = impossiplesDouble[i];
		if (input.compare(impossiplesDouble[i]) == 0)
			temp = impossiplesDouble[i];
	}
	cout << "double : " << temp << endl;
}

int	main(int argc, char** argv)
{
	string	input;

	if (argc == 2)
	{
		input = argv[1];
		checkIfChar(input);
		checkIfInt(input);
		checkIfFloat(input);
		checkIfDouble(input);
	}
	else
		cout << "input only one parameter. Example: ./convert <input>.\n";
	return (0);
}