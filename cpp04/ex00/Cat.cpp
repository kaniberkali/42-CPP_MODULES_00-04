#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    std::cout << this->type << " constructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}
