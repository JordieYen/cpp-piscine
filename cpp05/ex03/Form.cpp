#include "Form.hpp"

Form::Form(void) : _name("nothing"), _gradeToExecute(150), _gradeToSign(150)
{
	this->_isSigned = false;
}

Form::Form(string name, int gradeExecute, int gradeSign) : _name(name), _gradeToExecute(gradeExecute), _gradeToSign(gradeSign)
{
	if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
		throw Form::GradeTooHighException();
	else if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooLowException();
	this->_isSigned = false;
}

Form::Form(const Form& clone) : _name(clone.getName()), _gradeToExecute(clone.getGradeToExecute()), _gradeToSign(clone.getGradeToSign())
{
	this->_isSigned = clone.getStatus();
}

Form&	Form::operator=(const Form& clone)
{
	this->_isSigned = clone.getStatus();

	return (*this);
}

Form::~Form()
{}

void	Form::beSigned(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	else
		this->_isSigned = true;
}

string	Form::getName(void) const
{
	return (this->_name);
}

int		Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

int		Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

bool	Form::getStatus(void) const
{
	return (this->_isSigned);
}

std::ostream& operator << (std::ostream& os, const Form& form)
{
	os << "Form name : " << form.getName() << std::endl;
	os << "Grade to sign : " << form.getGradeToSign() << std::endl;
	os << "Grade to execute : " << form.getGradeToExecute() << std::endl;
	os << "Form status : " << form.getStatus() << std::endl;
	return (os);
}