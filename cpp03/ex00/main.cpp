#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap user1("Ali Kanıberk");
    ClapTrap user2("Bob");

    user1.attack("Bob");
    user2.takeDamage(5);
    user2.beRepaired(3);
    user1.attack("Bob");
    user2.takeDamage(10);
}