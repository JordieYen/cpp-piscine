#include "ClapTrap.hpp"

using std::cout;

int		main(void)
{
	ClapTrap clap1;
	ClapTrap clap2("apple");
	ClapTrap clap3("bottom");
	ClapTrap clap4("jeans");

	// clap4 = clap2;

	cout << "\n";
	clap1.attack(clap2.getName());
	clap2.attack(clap2.getName());
	clap3.attack(clap2.getName());
	clap4.attack(clap2.getName());

	cout << "\nClapTrap <" << clap1.getName() << "> has " << clap1.getHp() << "hp\n";
	clap1.takeDamage(5);
	cout << "ClapTrap <" << clap1.getName() << "> has " << clap1.getHp() << "hp\n";
	clap1.beRepaired(3);
	cout << "ClapTrap <" << clap1.getName() << "> has " << clap1.getHp() << "hp\n\n";

	clap1.attack(clap2);
	clap2.attack(clap2);
	clap3.attack(clap2);
	clap4.attack(clap2);
	cout << "\n";

	return (0);
}