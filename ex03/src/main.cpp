#include <ScavTrap.hpp>
#include <FragTrap.hpp>
#include <DiamondTrap.hpp>

int main (void)
{
	DiamondTrap	obj("Scaviste");
	DiamondTrap	objop("Skavinsky");

	std::cout << obj.getHitPoints() << std::endl;
	std::cout << obj.getEnergyPoints() << std::endl;
	std::cout << obj.getAttackDamage() << std::endl;
	obj.highFiveGuys();
	objop.setHitPoints(10);
	objop.setEnergyPoints(2);
	objop.setAttackDamage(3);
	std::cout << obj.getHitPoints() << std::endl;
	std::cout << obj.getEnergyPoints() << std::endl;
	std::cout << obj.getAttackDamage() << std::endl;
	obj.highFiveGuys();
	obj.whoAmi();
}
