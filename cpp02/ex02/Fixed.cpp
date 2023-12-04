#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->rawBits = 0;
    //std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int value)
{
    //std::cout << "Int constructor called" << std::endl;
    this->rawBits = value << this->fracBits;
}

Fixed::Fixed(float value)
{
    //std::cout << "Float constructor called" << std::endl;
	this->rawBits = roundf(value * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    //std::cout << "Copy constructor called" << std::endl;
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
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->rawBits = fixed.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (*this).getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (*this).getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (*this).getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (*this).getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (*this).getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (*this).getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++(void)
{
    ++this->rawBits;
    return *this;
} 

Fixed Fixed::operator++(int)
{
    Fixed result(*this);
    result.rawBits = this->rawBits++;
    return result;
}

Fixed& Fixed::operator--(void)
{
    --this->rawBits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed result(*this);
    result.rawBits = this->rawBits--;
    return result;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
}