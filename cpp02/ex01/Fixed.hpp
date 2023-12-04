#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int                 rawBits;
        static const int    fracBits = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed &fixed);
        ~Fixed();

        Fixed& operator=(const Fixed &fixed);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt() const;
        float   toFloat() const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif