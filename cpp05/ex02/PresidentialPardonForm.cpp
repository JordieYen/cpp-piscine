#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(string target) : Form("PresidentialPardonForm", 5, 25)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& clone) : Form("PresidentialPardonForm", 5, 25)
{
	this->_target = clone._target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& clone)
{
	this->_target = clone._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}