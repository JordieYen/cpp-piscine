#include <iostream>
using namespace std;

int	main(int argc, char** argv)
{
	int		i;
	int		j;
	char	temp;

	j = 1;
	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				temp = argv[j][i];
				if (argv[j][i] >= 'a' && argv[j][i] <='z')
					temp -= 32;
				cout << temp;
				i++;
			}
			j++;
		}
		cout << "\n";
	}
	else
		cout << "* REEEEEEE LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}