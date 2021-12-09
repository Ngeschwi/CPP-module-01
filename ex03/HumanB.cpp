#include "HumanB.hpp"

HumanA::HumanB(std::string name) name(name)
{
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this.name << "attack with his" << this->club << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon club)
{
	this->club = club;
	return ;
}

HumanA::~HumanB()
{
	return ;
}