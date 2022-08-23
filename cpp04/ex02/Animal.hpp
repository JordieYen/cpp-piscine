#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

using std::string;

class	Animal
{
	public:
		Animal(void);
		Animal(string type);
		Animal(const Animal& clone);
		Animal&	operator=(const Animal& clone);
		virtual ~Animal(void);

		void	setType(string type);
		string	getType(void) const;
		virtual	void	makeSound(void) const = 0;

	protected:
		string	type;
};

#endif