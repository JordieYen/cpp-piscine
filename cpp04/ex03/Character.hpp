#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

using std::string;

class Character : public ICharacter
{
	public:
		Character(void);
		Character(string name);
		Character(const Character& clone);
		Character&	operator=(const Character& clone);
		~Character();

		std::string const & getName() const;
		void				setName(string name);
		void 				equip(AMateria* m);
		void				unequip(int idx);
		void 				use(int idx, ICharacter& target);

	private:
		string		name;
		AMateria	*inventory[4];
		int			index;
};


#endif