#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
using std::string;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& clone);
		Intern&	operator=(const Intern& clone);
		~Intern();

		Form*	makeForm(string name, string target);
};

#endif