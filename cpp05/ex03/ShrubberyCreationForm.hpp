#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
using std::string;

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& clone);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& clone);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat bureaucrat);

	private:
		string	_target;
};

#endif