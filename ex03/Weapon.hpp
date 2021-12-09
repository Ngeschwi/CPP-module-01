#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>
# include <stdio.h>
# include <stdlib.h>
# include "HumanA.hpp"
# include "HumanB.hpp"

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon(std::string type);
		~Weapon();

		void				setType(std::string type);
		const std::string*	getType(void);
};

#endif