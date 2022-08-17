#include "DiamondTrap.hpp"

using std::cout;

int		main(void)
{
	DiamondTrap diamond1("bruh");

	cout << "\n";
	diamond1.whoAmI();
	diamond1.attack("broo");
	cout << "\n";

	return (0);
}