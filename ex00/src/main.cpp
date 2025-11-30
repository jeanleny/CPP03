#include <ClapTrap.hpp>

int main (void)
{
	ClapTrap	obj("el traposs");
	ClapTrap	objop("trapido");


	std::cout << "\n-- Attack Test --" << std::endl;
	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	obj.attack(objop.getName());
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	objop.takeDamage(obj.getAttackDamage());
	std::cout << "objop hitpoints = " << objop.getHitPoints() << std::endl;
	obj.setAttackDamage(5);
	std::cout << "\nobj damage = " << obj.getAttackDamage() << std::endl;
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	obj.attack(objop.getName());
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	objop.takeDamage(obj.getAttackDamage());
	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	obj.attack(objop.getName());
	objop.takeDamage(obj.getAttackDamage());
	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	obj.attack(objop.getName());
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	objop.takeDamage(obj.getAttackDamage());
	
	std::cout << "\n-- Repair Test --" << std::endl;
	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	objop.beRepaired(4);
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	std::cout << "objop hitpoints = " << objop.getHitPoints() << std::endl;
	
	std::cout << "\n-- Over damage Test --" << std::endl;
	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	obj.attack(objop.getName());
	std::cout << "obj energy points = " << obj.getEnergyPoints() << std::endl;
	objop.takeDamage(obj.getAttackDamage());
	std::cout << "objop hitpoints = " << objop.getHitPoints() << std::endl;
	
	std::cout << "\n-- Overflow Test --" << std::endl;

	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	objop.beRepaired(10000);
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	std::cout << "objop hitpoints = " << objop.getHitPoints() << std::endl;


	std::cout << "\nobjop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	objop.beRepaired(4294967295);
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	std::cout << "objop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "\n-- Energy Test --" << std::endl;
	std::cout << "\nobjop energy points = " << objop.getEnergyPoints() << std::endl;
	objop.beRepaired(0);
	objop.beRepaired(0);
	objop.beRepaired(0);
	objop.beRepaired(0);
	objop.beRepaired(0);
	objop.beRepaired(0);
	objop.beRepaired(0);
	std::cout << "objop hitpoints = " << objop.getHitPoints() << std::endl;
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	objop.beRepaired(0);
	std::cout << "objop energy points = " << objop.getEnergyPoints() << std::endl;
	return (1);
}
