#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

using std::string;

class	WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(string type);
		WrongAnimal(const WrongAnimal& clone);
		WrongAnimal&	operator=(const WrongAnimal& clone);
		~WrongAnimal(void);

		void	setType(string type);
		string	getType(void) const;
		void	makeSound(void) const;

	protected:
		string	type;
};

#endif