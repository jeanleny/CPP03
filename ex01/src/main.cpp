#include <ClapTrap.hpp>

int main (void)
{
	ClapTrap	obj("el traposs");
	ClapTrap	objop("trapido");

	std::cout << objop.getHitPoints() << std::endl;
	obj.setAttackDamage(3);
	obj.attack(objop.getName());
	objop.takeDamage(3);
	objop.attack(obj.getName());
	obj.attack(objop.getName());
	objop.takeDamage(3);
	obj.attack(objop.getName());
	objop.takeDamage(3);
	obj.attack(objop.getName());
	std::cout << objop.getHitPoints() << std::endl;
	objop.takeDamage(3);
	std::cout << objop.getHitPoints() << std::endl;
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.beRepaired(4);
	objop.takeDamage(3);
	objop.beRepaired(4);
	objop.attack(obj.getName());
	std::cout << objop.getHitPoints() << std::endl;
	std::cout << objop.getEnergyPoints() << std::endl;
	obj.setAttackDamage(40);
	obj.attack(objop.getName());
	objop.takeDamage(40);
	objop.takeDamage(40);
	return (1);
}
