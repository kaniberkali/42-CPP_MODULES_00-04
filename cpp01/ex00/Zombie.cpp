#include "Zombie.hpp"

Zombie::Zombie(void)
{
    
}

Zombie::~Zombie(void)
{
     std::cout << "Zombie " << this->name << " has been destroyed." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::randomChump(std::string name)
{
    Zombie zombie;
    zombie.setName(name);
    zombie.announce();
}

Zombie  *Zombie::newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->setName(name);
    return (zombie);
}