#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0) {}
Fixed::Fixed(const int value) : _value(value * (1 << Fixed::_bits)) {}
Fixed::Fixed(const float value) : _value(roundf(value * (1 << Fixed::_bits))) {}
Fixed::Fixed(const Fixed& f) {
    *this = f;
}
Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& f) {
    // std::cout << "Assignation operator called" << std::endl;
    if (this != &f)
        _value = f.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed& f) {
    return (_value > f.getRawBits());
}

bool Fixed::operator<(const Fixed& f) {
    return (_value < f.getRawBits());
}

bool Fixed::operator>=(const Fixed& f) {
    return (_value >= f.getRawBits());
}

bool Fixed::operator<=(const Fixed& f) {
    return (_value <= f.getRawBits());
}

bool Fixed::operator==(const Fixed& f) {
    return (_value == f.getRawBits());
}

bool Fixed::operator!=(const Fixed& f) {
    return (_value != f.getRawBits());
}


Fixed Fixed::operator+(const Fixed& f) const {
    Fixed tmp(toFloat() + f.toFloat());
    return (tmp);
}

Fixed Fixed::operator-(const Fixed& f) const {
    Fixed tmp(toFloat() - f.toFloat());
    return (tmp);
}

Fixed Fixed::operator*(const Fixed& f) const {
    Fixed tmp(toFloat() * f.toFloat());
    return (tmp);
}

Fixed Fixed::operator/(const Fixed& f) const {
    Fixed tmp(toFloat() / f.toFloat());
    return (tmp);
}


Fixed& Fixed::operator++() {
    ++_value;
    return (*this);
}

Fixed& Fixed::operator--() {
    --_value;
    return (*this);
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    _value++;
    return (tmp);
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    _value--;
    return (tmp);
}

Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
    return (f1.getRawBits() < f2.getRawBits() ? f1 : f2);
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
    return (f1.getRawBits() > f2.getRawBits() ? f1 : f2);
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
    return (f1.getRawBits() < f2.getRawBits() ? f1 : f2);
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
    return (f1.getRawBits() > f2.getRawBits() ? f1 : f2);
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
