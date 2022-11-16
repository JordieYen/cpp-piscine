#include "MateriaSource.hpp"
#include <iostream>

using std::cout;
using std::endl;

MateriaSource::MateriaSource(void)
{
	this->index = 0;
}

MateriaSource::MateriaSource(const MateriaSource& clone)
{
	this->index = clone.index;
	int i = 0;

	while (i <= this->index)
	{
		this->spellbook[i] = clone.spellbook[i];
		i++;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& clone)
{
	this->index = clone.index;
	int i = 0;

	while (i <= this->index)
	{
		this->spellbook[i] = clone.spellbook[i];
		i++;
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	// int i = 0;

	// while (i <= this->index)
	// {
	// 	if (this->spellbook[i])
	// 		delete this->spellbook[i];
	// 	i++;
	// }
}

void		MateriaSource::learnMateria(AMateria* m)
{
	if (this->index < 4)
	{
		this->spellbook[this->index] = m->clone();
		cout << this->spellbook[this->index]->getType() << " materia learned!" << endl;
		this->index++;
	}
	else
		cout << "spell book is full!" << endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	cout << "creating " << type << " materia : ";
	for (int i = 0; i < this->index; i++)
	{
		if (type == this->spellbook[i]->getType())
		{
			cout << this->spellbook[i]->getType() << " materia created!" << endl;
			return (this->spellbook[i]->clone());
		}
	}
	cout << "spell not learned!" << endl;
	return (0);
}