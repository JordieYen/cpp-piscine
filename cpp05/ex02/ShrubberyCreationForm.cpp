#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm(string target) : Form("ShrubberyCreationForm", 137, 145)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& clone) : Form("ShrubberyCreationForm", 137, 145)
{
	this->_target = clone._target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& clone)
{
	this->_target = clone._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
	{
		std::ofstream outfile (this->_target + "_shrubbery");
		outfile << "                    # #### ##\n";
        outfile << "                ### \\/#|### |/####\n";
        outfile << "               ##\\/#/ \\||/##/_/##/_#\n";
        outfile << "             ###  \\/###|/ \\/ # ###\n";
        outfile << "           ##_\\_#\\_\\## | #/###_/_####\n";
        outfile << "          ## #### # \\ #| /  #### ##/##\n";
        outfile << "           __#_--###`  |{,###---###-~\n";
        outfile << "                     \\ }{\n";
        outfile << "                        }}{\n";
        outfile << "                       }}{\n";
        outfile << "                      {{}\n";
        outfile << "                , -=-~{ .-^- _\n";
        outfile << "                      `}\n";
        outfile << "                       {\n";
		outfile.close();
	}
}