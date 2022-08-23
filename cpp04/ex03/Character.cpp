#include "Character.hpp"

Character::Character(void)
{
	this->setName("NPC");
	index = 0;
}

Character::Character(string name)
{
	this->setName(name);
	index = 0;
}

Character::Character(const Character& clone)
{
	this->setName(clone.getName());
	int i = 0;

	while (i <= this->index)
	{
		this->inventory[i] = clone.inventory[i];
		i++;
	}
}

Character&	Character::operator=(const Character& clone)
{
	this->setName(clone.getName());
	int i = 0;

	while (i <= this->index)
	{
		this->inventory[i] = clone.inventory[i];
		i++;
	}
	return (*this);
}

Character::~Character()
{
	int i = 0;

	while (i <= this->index)
	{
		delete this->inventory[i];
		i++;
	}
}

std::string const & Character::getName() const
{
	return (this->name);
}

void				Character::setName(string name)
{
	this->name = name;
}

void 				Character::equip(AMateria* m)
{
	if (index < 4)
	{
		this->inventory[index] = m->clone();
		index++;
	}
}

void				Character::unequip(int idx)
{
	if (idx >= 0 && idx <=3 && idx <= this->index)
	{
		int	i = idx;

		while (i <= index && this->inventory[i + 1])
		{
			this->inventory[i] = this->inventory[i + 1];
			i++;
		}
		index--;
	}
}

void 				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <=3 && idx <= this->index)
		this->inventory[idx]->use(target);
}