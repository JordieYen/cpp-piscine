#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <iostream>
#include <list>

using std::string;
using std::cout;
using std::endl;

int		main(void)
{
	cout  << "MutantStack: \n";
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;

	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);


	cout  << "\nlist: \n";

	std::list<int> lis;

	lis.push_back(5);
	lis.push_back(17);

	std::cout << lis.back() << std::endl;

	lis.pop_back();

	std::cout << lis.size() << std::endl;

	lis.push_back(3);
	lis.push_back(5);
	lis.push_back(737);
	lis.push_back(0);

	std::list<int>::iterator itl = lis.begin();
	std::list<int>::iterator itel = lis.end();

	++itl;
	--itl;

	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}

	std::list<int> ls(lis);

	return (0);
}