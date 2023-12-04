#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap scav("Ali Kanıberk");
    ScavTrap scav2("Bob");
    ScavTrap scaav = scav;
    scav.attack("Bob");
    scav2.takeDamage(500);
    scav2.beRepaired(10);
    scav2.guardGate();
    return 0;
}