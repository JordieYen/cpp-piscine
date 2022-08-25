#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
using std::string;

class Bureaucrat;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(string target);
		RobotomyRequestForm(const RobotomyRequestForm& clone);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm& clone);
		~RobotomyRequestForm();

		void	execute(Bureaucrat bureaucrat);
	
	private:
		string	_target;
};

#endif