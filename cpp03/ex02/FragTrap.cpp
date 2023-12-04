#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->healt = 100;
    this->energy = 100;
    this->power = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap(fragtrap)
{
    *this = fragtrap;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &fragtrap)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = fragtrap.name;
    this->healt = fragtrap.healt;
    this->energy = fragtrap.energy;
    this->power = fragtrap.power;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " give you a high five" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    if (energy > 0 && healt > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->power << " points of damage!" << std::endl;
        energy -= 1;
    }
    else
        std::cout << "FragTrap " << this->name << " has no energy to attack!" << std::endl;
}