#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string name, int	grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& clone) : _name(clone.getName())
{
	this->_grade = clone.getGrade();
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& clone)
{
	this->_grade = clone.getGrade();

	return (*this);
}

Bureaucrat::~Bureaucrat()
{	
}

string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int		Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		this->_grade--;
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "grade will be out of range if incremented, grade unchanged.\n";
		this->_grade++;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		this->_grade++;
		if (this->_grade > 150)
			throw Bureaucrat::GradeTooHighException();
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "grade will be out of range if decremented, grade unchanged.\n";
		this->_grade--;
	}
}

std::ostream& operator << (std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}