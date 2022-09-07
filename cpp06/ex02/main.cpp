#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

using std::cout;

Base	*generate(void)
{
	Base	*base;
	Base	*temp[] = {new A(), new B(), new C()};

	int result = 1 + (rand() % 3);
	switch (result)
	{
		case 1:
			base = temp[result - 1];
			break;
		case 2:
			base = temp[result - 1];
			break;
		case 3:
			base = temp[result - 1];
			break;
	}
	return (base);
}

void identify(Base* p)
{
	if (A* child = dynamic_cast<A*>(p))
        cout << "A\n";
    else if (B* child = dynamic_cast<B*>(p))
        cout << "B\n";
	else if (C* child = dynamic_cast<C*>(p))
        cout << "c\n";
}

void identify(Base& p)
{
	try
	{
		A& child = dynamic_cast<A&>(p);
		child.~A();
		cout << "A\n";
	}
	catch (std::exception & e){}
	try
	{
		B& child = dynamic_cast<B&>(p);
		child.~B();
		cout << "B\n";
	}
	catch (std::exception & e){}
	try
	{
		C& child = dynamic_cast<C&>(p);
		child.~C();
		cout << "C\n";
	}
	catch (std::exception & e){}
}

int	main(void)
{
	Base *base1;
	Base *base2;
	Base *base3;
	Base *base4;
	Base *base5;
	Base *base6;
	Base *base7;
	
	base1 = generate();
	base2 = generate();
	base3 = generate();
	base4 = generate();
	base5 = generate();
	base6 = generate();
	base7 = generate();

	cout << "base1 : "; 
	identify(base1);
	cout << "base2 : "; 
	identify(base2);
	cout << "base3 : "; 
	identify(base3);
	cout << "base4 : ";
	identify(base4);
	cout << "base5 : ";
	identify(base5);
	cout << "base6 : ";
	identify(base6);
	cout << "base7 : ";
	identify(base7);

	cout << "----------------\n";

	cout << "base1 : ";
	identify(*base1);
	cout << "base2 : ";
	identify(*base2);
	cout << "base3 : ";
	identify(*base3);
	cout << "base4 : ";
	identify(*base4);
	cout << "base5 : ";
	identify(*base5);
	cout << "base6 : ";
	identify(*base6);
	cout << "base7 : ";
	identify(*base7);

	return (0);
}