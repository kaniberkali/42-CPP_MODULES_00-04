#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string 	name;
        unsigned int	healt;
        unsigned int	energy;
        unsigned int    power;
    public:
 		ClapTrap(std::string name);
        ClapTrap(const ClapTrap &claptrap);
    	~ClapTrap();

    	ClapTrap &operator=(const ClapTrap& claptrap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif