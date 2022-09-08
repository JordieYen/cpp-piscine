#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int i);
		Array(const Array& clone);
		Array&	operator=(const Array& clone);
		T&	operator[](int i);
		~Array();

		int		size(void);
		// void	append(T input);

	private:
		T		*_array;
		int		_size;

};

#endif