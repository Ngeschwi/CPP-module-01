#include "Zombie.hpp"

Zombie::Zombie(std::string name) : zombie_name(name)
{
	return ;
}

void	Zombie::annonced(void) const
{
	std::cout << this.zombie_name << " " << "BraiiiiiiinnnzzzZ" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this.zombie_name = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << "Destructeur" << this.zombie_name << "called" << std:endl;
	return ;
}