#include "Data.hpp"

Data::Data(void)
{
	this->_ptr = NULL;
}

Data::Data(void *ptr)
{
	this->_ptr = ptr;
}

Data::Data(const Data& clone)
{
	this->_ptr = clone._ptr;
}

Data&	Data::operator=(const Data& clone)
{
	this->_ptr = clone._ptr;
	return (*this);
}

Data::~Data()
{}

void	*Data::getData(void)
{
	return(this->_ptr);
}