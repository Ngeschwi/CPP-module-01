#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include "HumanA.hpp"

class HumanB
{
	private:
		std::string	name;
	
	public:
		HumanB(std::string name);
		~HumanB();

		Weapon*		club;
		void	attack() const;
		void	setWeapon(Weapon club);
};

#endif