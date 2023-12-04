#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->type = "WrongCat";
    std::cout << this->type << " constructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
    std::cout << "Meow!" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << this->type << " destructor called" << std::endl;
}
