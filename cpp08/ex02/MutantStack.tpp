#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void)
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& clone)
{
	*this = clone;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& clone)
{
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}