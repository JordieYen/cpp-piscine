#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include "Bureaucrat.hpp"
using std::string;

class Bureaucrat;

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(string target);
		PresidentialPardonForm(const PresidentialPardonForm& clone);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm& clone);
		~PresidentialPardonForm();

		void	execute(Bureaucrat bureaucrat);

	private:
		string	_target;
};

#endif