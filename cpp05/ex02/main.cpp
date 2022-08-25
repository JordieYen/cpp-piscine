#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Form		*shrub = new ShrubberyCreationForm("boat");
	Form		*robot = new RobotomyRequestForm("boat");
	Form		*presidential = new PresidentialPardonForm("boat");
	Bureaucrat	president("president", 3);
	Bureaucrat	man("joe", 150);

	std::cout << *shrub;
	shrub->beSigned(president);
	shrub->execute(president);
	// shrub->beSigned(man);
	// shrub->execute(man);
	std::cout << *shrub;

	std::cout << std::endl;

	std::cout << *robot;
	robot->beSigned(president);
	robot->execute(president);
	// robot->beSigned(man);
	// robot->execute(man);
	std::cout << *robot;

	std::cout << std::endl;

	std::cout << *presidential;
	presidential->beSigned(president);
	presidential->execute(president);
	// presidential->beSigned(man);
	// presidential->execute(man);
	std::cout << *presidential;

	return (0);
}