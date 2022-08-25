#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	president("president", 3);
	Intern		intern;
	Form		*form;

	form = intern.makeForm("robotomy request", "Bender");
	form->execute(president);
	form = intern.makeForm("robotomy", "Bender");

	return (0);
}