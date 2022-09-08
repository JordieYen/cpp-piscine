#include "Span.hpp"
#include <algorithm>

Span::Span(void)
{
	this->_size = 0;
}

Span::Span(unsigned int i)
{
	this->_size = i;
}

Span::Span(const Span& clone)
{
	this->_size = clone._size;
	for (int i=0; i<clone._arr.size(); i++) 
        this->_arr.push_back(clone._arr[i]); 
}

Span&	Span::operator=(const Span& clone)
{
	this->_size = clone._size;
	for (int i=0; i<clone._arr.size(); i++) 
        this->_arr.push_back(clone._arr[i]);
	
	return (*this);
}

Span::~Span()
{}

void	Span::addNumber(int input)
{
	if (this->_arr.size() < this->_size)
		this->_arr.push_back(input);
	else
		throw Span::SizeOverloadException();
}

int		Span::shortestSpan(void)
{
	if (this->_arr.size() == 0 || this->_arr.size() == 1)
		throw Span::SizeUnderloadException();
	std::sort(this->_arr.begin(), this->_arr.end());

	int	shortest = 2147483647;
	for (int i = 0; i < this->_arr.size() - 1; i++) 
    {
		if (this->_arr[i + 1] - this->_arr[i] < shortest)
			shortest = this->_arr[i + 1] - this->_arr[i];
	}
	return (shortest);
}

int		Span::longestSpan(void)
{
	if (this->_arr.size() == 0 || this->_arr.size() == 1)
		throw Span::SizeUnderloadException();
	std::sort(this->_arr.begin(), this->_arr.end());

	int	longest = this->_arr[this->_arr.size() - 1] - this->_arr[0];
	return (longest);
}

void	Span::addVector(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator ptr = begin; ptr < end; ptr++)
        this->addNumber(*ptr);
}

void	Span::print(void)
{
	std::cout << "_arr[] = [";
	for (int i = 0; i < this->_arr.size(); i++)
		std::cout << " " << this->_arr[i];
	std::cout << "]" << std::endl;
}