#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"
using std::string;

class Bureaucrat;

class Form
{
	private:
		const string	_name;
		bool			_isSigned;
		const int		_gradeToExecute;
		const int		_gradeToSign;

	public:
		Form(void);
		Form(string name, int gradeExecute, int gradeSign);
		Form(const Form& clone);
		Form&	operator=(const Form& clone);
		~Form();

		void	beSigned(Bureaucrat bureaucrat);
		string	getName(void) const;
		int		getGradeToExecute(void) const;
		int		getGradeToSign(void) const;
		bool	getStatus(void) const;
		virtual void	execute(Bureaucrat bureaucrat) = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char* what() const throw() // understand better
				{
					return ("Grade too High!");
				}
		};

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char* what() const throw() // understand better
				{
					return ("Grade too low!");
				}
		};
};

std::ostream& operator << (std::ostream& os, const Form& Form);

#endif