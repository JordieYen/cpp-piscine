#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

using std::string;

class	Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& clone);
		Cat&	operator=(const Cat& clone);
		~Cat(void);

		void	makeSound(void) const;
		Brain&	getBrain(void);

	private:
		Brain* brain;
};

#endif