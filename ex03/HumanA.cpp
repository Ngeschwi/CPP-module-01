#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon club) name(name), club(club)
{
	return ;
}

void	HumanA::attack(void) const
{
	std::cout << this.name << "attack with his" << this->club << std::endl;
	return ;
}

HumanA::~HumanA()
{
	return ;
}