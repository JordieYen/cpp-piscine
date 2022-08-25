#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
# include <iostream>

using std::string;

class Form;

class Bureaucrat
{
	private:
		const string	_name;
		int				_grade;

	public:
		Bureaucrat(string name, int	grade);
		Bureaucrat(const Bureaucrat& clone);
		Bureaucrat&	operator=(const Bureaucrat& clone);
		~Bureaucrat();

		void	signForm(Form form);
		string	getName(void) const;
		int		getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw() // understand better
				{
					return ("Grade too High! Grade must be within the 1 to 150 range.");
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw() // understand better
				{
					return ("Grade too low! Grade must be within the 1 to 150 range.");
				}
		};
};

std::ostream& operator << (std::ostream& os, const Bureaucrat& bureaucrat);

#endif