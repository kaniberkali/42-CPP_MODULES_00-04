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

        bool operator>(const Fixed &fixed) const;
        bool operator<(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;

        Fixed operator+(const Fixed &fixed) const;
        Fixed operator-(const Fixed &fixed) const;
        Fixed operator*(const Fixed &fixed) const;
        Fixed operator/(const Fixed &fixed) const;

        Fixed& operator++(void);
        Fixed operator++(int);
        Fixed& operator--(void);
        Fixed operator--(int);

        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);

        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        int     toInt() const;
        float   toFloat() const;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif