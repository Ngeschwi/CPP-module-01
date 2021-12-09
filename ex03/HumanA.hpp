#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include "HumanB.hpp"

class HumanA
{
	private:
		std::string	name;
	
	public:
		HumanA(std::string name, Weapon& club);
		~HumanA();

		Weapon&		club;
		void	attack() const;
};

#endif