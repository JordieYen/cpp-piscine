#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include <iostream>

using std::cout;
using std::endl;

int	main(void)
{
	IMateriaSource*	src = new MateriaSource();
	cout << "\n----Learning Materia----\n" << endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	ICharacter* me = new Character("me");

	cout << "\n----Creating Materia----\n" << endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");

	ICharacter* bob = new Character("bob");

	cout << "\n----Using Materia----\n" << endl;
	me->use(0, *bob);
	me->use(1, *bob);

	cout << endl;

	delete bob;
	delete me;
	delete src;

	return 0;
}