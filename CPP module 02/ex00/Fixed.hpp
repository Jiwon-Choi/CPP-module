#ifndef _FIXED_H_
# define _FIXED_H_

# include <iostream>

class Fixed {
    private:
    int _value;
    static const int _bits = 8;

    public:
    Fixed(void);
    Fixed(const Fixed& f);
    ~Fixed(void);

    Fixed& operator=(const Fixed& f);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif
