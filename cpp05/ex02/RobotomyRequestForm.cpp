#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(string target) : Form("RobotomyRequestForm", 45, 72)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& clone) : Form("RobotomyRequestForm", 45, 72)
{
	this->_target = clone._target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& clone)
{
	this->_target = clone._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		// rand();
		// rand();
		// rand();
		int result = 1 + (rand() % 2);
		switch (result)
		{
    		case 1:
    			std::cout << this->_target << " has been robotomized\n";
        		break;
    		case 2:
				std::cout << this->_target << " has not been robotomized\n";
				break;
		}
	}
}