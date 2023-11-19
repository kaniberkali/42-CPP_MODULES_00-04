#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    this->weapon = NULL;
}

HumanB::~HumanB()
{

}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack() const
{
    if (this->weapon->getType().empty())
            std::cout << this->name +" The attack could not take place because no weapon was found." << std::endl;
    else
        std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}
