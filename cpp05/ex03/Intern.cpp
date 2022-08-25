#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern& clone)
{
}

Intern&	Intern::Intern::operator=(const Intern& clone)
{
	return (*this);
}

Intern::~Intern()
{
}

Form*	Intern::makeForm(string name, string target)
{
	int			i = 0;
	string		forms[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form		*form;
	Form		*temp[] = {new RobotomyRequestForm(target), new PresidentialPardonForm(target), new ShrubberyCreationForm(target)};

	while (i < 3)
	{
		if (name.compare(forms[i]) == 0)
			return(temp[i]);
		i++;
	}
	if (form)
		std::cout << "form does not exists\n";
	return(0);
}