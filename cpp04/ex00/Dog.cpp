#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    std::cout << this->type << " constructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
    std::cout << "Woof!" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}
