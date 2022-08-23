#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called\n";
	index = 0;
}

Brain::Brain(const Brain& clone)
{
	std::cout << "Brain copy constructor called\n";
	int i = 0;

	while (i < clone.getIdeaCount() - 1)
	{
		this->ideas[i] = clone.ideas[i];
		i++;
	}
	this->index = clone.getIdeaCount() - 1;
}

Brain&	Brain::operator=(const Brain& clone)
{
	int i = 0;

	while (i < clone.getIdeaCount() - 1)
	{
		this->ideas[i] = clone.ideas[i];
		i++;
	}
	this->index = clone.getIdeaCount() - 1;

	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

void	Brain::addIdea(string idea)
{
	if (index < 100)
	{
		this->ideas[this->index] = idea;
		index++;
	}
	else
		std::cout << "Malfunction... Brain is out of space.\n";
}

void		Brain::printIdeas(void)
{
	int i = 0;

	while (this->ideas[i] != "\0")
	{
		std::cout << this->ideas[i] << std::endl;
		i++;
	}
}

int		Brain::getIdeaCount(void) const
{
	return (this->index + 1);
}