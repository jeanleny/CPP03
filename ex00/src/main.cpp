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
	objop.takeDamage(3);
	std::cout << objop.getHitPoints() << std::endl;
	return (1);
}
