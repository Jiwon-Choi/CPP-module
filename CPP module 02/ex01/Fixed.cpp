#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value * (1 << Fixed::_bits)) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << Fixed::_bits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) {
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f) {
    std::cout << "Assignation operator called" << std::endl;
    if (this != &f)
        _value = f.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const {
    return (_value);
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

float Fixed::toFloat(void) const {
    return (static_cast<float>(_value) / (1 << Fixed::_bits));
}

int Fixed::toInt(void) const {
    return (_value / (1 << Fixed::_bits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    os << f.toFloat();
    return (os);
}
