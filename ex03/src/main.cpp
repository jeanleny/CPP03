#include <ScavTrap.hpp>
#include <FragTrap.hpp>

int main (void)
{
	FragTrap	obj("Scaviste");
	ScavTrap	objop("OScour");

	std::cout << obj.getHitPoints() << std::endl;
	std::cout << obj.getEnergyPoints() << std::endl;
	std::cout << obj.getAttackDamage() << std::endl;
	objop.guardGate();
	obj.highFiveGuys();
}
