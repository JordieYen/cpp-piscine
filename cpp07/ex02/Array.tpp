#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	this->_array = new T[0];
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int i)
{
	this->_array = new T[i];
	this->_size = i;
}

template <typename T>
Array<T>::Array(const Array& clone)
{
	this->_array = new T[clone._size];
	for (int i = 0; i < clone._size; i++)
		this->_array[i] = clone._array[i];
	this->_size = clone._size;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& clone)
{
	this->_array = new T[clone._size];
	for (int i = 0; i < clone._size; i++)
		this->_array[i] = clone._array[i];
	this->_size = clone._size;

	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
}

template <typename T>
T&	Array<T>::operator[](int i)
{
	if (i < 0 || i > this->_size - 1)
		throw std::out_of_range("out of raaange");
	else
		return (this->_array[i]);
}

// template <typename T>
// void	Array<T>::append(T input)
// {
// 	this->_array.append(input);
// 	this->_size++;
// }

template <typename T>
int	Array<T>::size(void)
{
	return (this->_size);
}