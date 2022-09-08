#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int> container;

	for (int a = 1; a <= 5; a++)
		container.push_back(a);

	std::cout << "vector = [";
	for (int i = 0; i != container.size(); i++)
		std::cout << " " << container[i];
	std::cout << "]" << std::endl;
	std::cout << std::endl;

	int	temp;
	temp = ::easyfind(container, 3);
	std::cout << "index of 3 in container = " << temp << std::endl;
	std::cout << std::endl;

	temp = ::easyfind(container, 7);
	std::cout << "index of 7 in container = " << temp << std::endl;

	return (0);
}