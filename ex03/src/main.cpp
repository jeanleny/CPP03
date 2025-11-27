#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>

int main (void)
{
	DiamondTrap	obj("Scaviste");

	std::cout << obj.getHitPoints() << std::endl;
	std::cout << obj.getEnergyPoints() << std::endl;
	std::cout << obj.getAttackDamage() << std::endl;
	obj.highFiveGuys();
	obj.whoAmi();
}
