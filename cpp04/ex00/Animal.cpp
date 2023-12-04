#include "Animal.hpp"

Animal::Animal(void)
{
    this->type = "Animal";
    std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &animal)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

std::string Animal::getType(void) const
{
    return this->type;
}

Animal& Animal::operator=(const Animal& animal)
{
    this->type = animal.getType();
    return *this;
}

void	Animal::makeSound(void) const
{
    std::cout << "Animal makeSound called" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}