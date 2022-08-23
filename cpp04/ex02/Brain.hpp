#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

using std::string;

class	Brain
{
	public:
		Brain(void);
		Brain(const Brain& clone);
		Brain&	operator=(const Brain& clone);
		~Brain(void);

		void	addIdea(string idea);
		void	printIdeas(void);
		int		getIdeaCount(void) const;

		string ideas[100];

	private:
		int		index;
};

#endif