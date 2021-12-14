#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << "attack with his " << this->club->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->club = &club;
	return ;
}

HumanB::~HumanB()
{
	return ;
}