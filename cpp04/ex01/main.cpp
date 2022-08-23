#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

using std::cout;

int	main(void)
{
	Brain brain;
	Brain brain1;

	brain.addIdea("apples are cool arent they");
	brain.addIdea("apples are cool huh");
	brain1 = brain;
	brain.printIdeas();
	brain1.printIdeas();

	cout << "--------------------" <<  std::endl;
	Cat	cat1;
	cout << std::endl;
	cat1.getBrain().addIdea("apples are nice");
	cout << std::endl;
	cat1.getBrain().printIdeas();
	cout << std::endl;
	Cat	cat2(cat1);
	cout << std::endl;
	cat2.getBrain().printIdeas();
	cout << std::endl;

	cout << "--------------------" <<  std::endl;
	Dog	dog1;
	cout << std::endl;
	dog1.getBrain().addIdea("bottoms are nice");
	cout << std::endl;
	dog1.getBrain().printIdeas();
	cout << std::endl;
	Dog	dog2(dog1);
	cout << std::endl;
	dog2.getBrain().printIdeas();
	cout << std::endl;

	int		temp = 4;
	Animal	*animal[temp];

	cout << "--------------------" <<  std::endl;
	for (int i = 0; i < temp; i++)
	{
		if (i < temp / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
		cout << std::endl;
	}

	cout << "--------------------" <<  std::endl;
	for (int i = 0; i < temp; i++)
	{
		delete animal[i];
		cout << std::endl;
	}
	cout << "--------------------" <<  std::endl;

	system("leaks animal");
	return (0);
}