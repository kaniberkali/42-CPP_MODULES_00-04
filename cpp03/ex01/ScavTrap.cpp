#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->healt = 100;
    this->energy = 50;
    this->power = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
    *this = scavtrap;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &scavtrap)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->name = scavtrap.name;
    this->healt = scavtrap.healt;
    this->energy = scavtrap.energy;
    this->power = scavtrap.power;
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (this->energy > 0 && this->healt > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->power << " points of damage!" << std::endl;
        this->energy -= 1;
    }
    else
        std::cout << "ScavTrap " << this->name << " has no energy to attack!" << std::endl;
}