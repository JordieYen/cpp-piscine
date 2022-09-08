#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename U>
void iter(T *box, U length, void (*doSomthing)(T&))
{
	for (int i = 0; i < length; i++)
	{
		doSomthing(box[i]);
	}
}

#endif