#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;

int		main(void)
{
	cout << "------------------------------------\n";
	ScavTrap scav1;
	ScavTrap scav2("apple");

	cout << "\n";
	scav1.attack(scav2.getName());
	scav2.attack(scav2.getName());

	cout << "\nScavTrap <" << scav1.getName() << "> has " << scav1.getHp() << "hp\n";
	scav1.takeDamage(5);
	cout << "ScavTrap <" << scav1.getName() << "> has " << scav1.getHp() << "hp\n";
	scav1.beRepaired(3);
	cout << "ScavTrap <" << scav1.getName() << "> has " << scav1.getHp() << "hp\n\n";

	scav1.attack(scav2);
	cout << "ScavTrap <" << scav2.getName() << "> has " << scav2.getHp() << "hp\n";
	scav2.attack(scav2);
	cout << "ScavTrap <" << scav2.getName() << "> has " << scav2.getHp() << "hp\n\n";

	scav1.guardGate();
	scav2.guardGate();
	cout << "\n";

	return (0);
}