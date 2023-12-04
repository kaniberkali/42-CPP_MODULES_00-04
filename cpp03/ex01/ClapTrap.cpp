#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->healt = 10;
    this->energy = 10;
    this->power = 0;
    std::cout << "ClapTrap " << name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    *this = claptrap;
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& claptrap)
{
    this->name = claptrap.name;
    this->healt = claptrap.healt;
    this->energy = claptrap.energy;
    this->power = claptrap.power;
    return *this;
}

void    ClapTrap::attack(std::string const& target)
{
    if (energy > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << power << " points of damage!" << std::endl;
        energy -= 1;
    }
    else
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (healt > amount)
    {
        std::cout << "ClapTrap " << name << " takes " << amount << " damage!" << std::endl;
        healt -= amount;
    }
    else
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (energy > amount)
    {
        std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
        energy -= 1;
        healt += amount;
    }
    else
        std::cout << "ClapTrap " << name << " is out of energy!" << std::endl;
}