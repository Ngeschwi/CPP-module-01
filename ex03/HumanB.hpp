#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon*		club;
	
	public:
		HumanA(std::string name);
		~HumanA();

		void	attack() const;
		void	setWeapon(Weapon club);
};

#endif