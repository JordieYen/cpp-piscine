#include "ClapTrap.hpp"
#include "FragTrap.hpp"

using std::cout;

int		main(void)
{
	cout << "------------------------------------\n";
	FragTrap frag1;
	FragTrap frag2("apple");

	cout << "\n";
	frag1.attack(frag2.getName());
	frag2.attack(frag2.getName());

	cout << "\nFragTrap <" << frag1.getName() << "> has " << frag1.getHp() << "hp\n";
	frag1.takeDamage(5);
	cout << "FragTrap <" << frag1.getName() << "> has " << frag1.getHp() << "hp\n";
	frag1.beRepaired(3);
	cout << "FragTrap <" << frag1.getName() << "> has " << frag1.getHp() << "hp\n\n";

	frag1.attack(frag2);
	cout << "FragTrap <" << frag2.getName() << "> has " << frag2.getHp() << "hp\n";
	frag2.attack(frag2);
	cout << "FragTrap <" << frag2.getName() << "> has " << frag2.getHp() << "hp\n\n";

	frag1.highFivesGuys();
	frag2.highFivesGuys();
	cout << "\n";

	return (0);
}