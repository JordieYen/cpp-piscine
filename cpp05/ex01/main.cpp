#include "Form.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Form		form("INDEPENDENCE", 5, 5);
	Bureaucrat	president("president", 3);
	Bureaucrat	man("joe", 70);
	// Form form1("INDEPENDENCE", -5, 155);

	std::cout << form;
	std::cout << std::endl;
	president.signForm(form);
	man.signForm(form);

	return (0);
}