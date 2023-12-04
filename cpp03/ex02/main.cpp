#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap scav("Ali Kanıberk");
    scav.attack("Bob");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.guardGate();

    FragTrap frag("Bob");
    frag.attack("Ali Kanıberk");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}