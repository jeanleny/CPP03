#include <ClapTrap.hpp>

int main (void)
{
	ClapTrap	obj("el traposs");
	ClapTrap	objcpy(obj);
	ClapTrap	objop("trapido");

	objop = obj;
	std::cout << objop.getName() << std::endl;
	return (1);
}
