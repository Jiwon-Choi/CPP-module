#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>
# include <cmath>

class Fixed {
    private:
    int _value;
    static const int _bits = 8;

    public:
    Fixed(void);
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& f);
    ~Fixed(void);

    Fixed& operator=(const Fixed& f);

    Fixed& operator>(const Fixed& f);
    Fixed& operator<(const Fixed& f);
    Fixed& operator>=(const Fixed& f);
    Fixed& operator<=(const Fixed& f);
    Fixed& operator==(const Fixed& f);
    Fixed& operator!=(const Fixed& f);

    operator++(const Fixed& f);
    operator--(const Fixed& f);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& f);

#endif
