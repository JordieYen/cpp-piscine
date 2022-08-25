#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat man("Yames bond", 1);
	Bureaucrat woman("Mary", 150);

	// Bureaucrat low("Yames bond", -1);
	// Bureaucrat high("Mary", 160);

	man.incrementGrade();
	woman.decrementGrade();
	std::cout << std::endl;

	std::cout << man << std::endl;
	man.decrementGrade();
	std::cout << man.getName() << "'s grade decremented.\n";
	std::cout << man << std::endl;
	std::cout << std::endl;

	std::cout << woman << std::endl;
	woman.incrementGrade();
	std::cout << woman.getName() << "'s grade incremented.\n";
	std::cout << woman << std::endl;

	return (0);
}