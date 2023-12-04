#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->rawBits = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->rawBits = value << this->fracBits;
}

Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(value * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

int Fixed::getRawBits(void) const
{
    return this->rawBits;
}

void    Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed::toInt() const {
	return this->rawBits >> this->fracBits;
}

float Fixed::toFloat() const {
	return (float)this->rawBits / (1 << this->fracBits);
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->rawBits = fixed.getRawBits();
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}