#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

using std::string;

class	Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& clone);
		Dog&	operator=(const Dog& clone);
		~Dog(void);

		void	makeSound(void) const;
		Brain&	getBrain(void);

	private:
		Brain* brain;

};

#endif