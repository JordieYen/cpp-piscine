#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template <typename T>
int easyfind(std::vector<T> container, int n)
{
	int i = 0;
	typename std::vector<T>::const_iterator itr = std::find(container.begin(), container.end(), n);
	for (typename std::vector<T>::const_iterator it = container.begin(); it!=container.end(); ++it)
	{
 		if (it == itr)
			return (i);
		i++;
	}
	return (-1);
}

#endif