#include "Convert.hpp"

Convert::Convert(void) {}

Convert::Convert(char * inputValue) {
    inputValue_ = inputValue;
    rawValue_ = atof(inputValue_);
}

Convert::Convert(const Convert & ref) {
    *this = ref;
}

Convert::~Convert(void) {}

Convert& Convert::operator=(const Convert & ref) {
    inputValue_ = ref.inputValue_;
    rawValue_ = ref.rawValue_;
    return (*this);
}

void Convert::toChar() const {
    std::cout << "char: ";
    if (isnan(rawValue_) || isinf(rawValue_)
        || rawValue_ < INT_MIN || rawValue_ > INT_MAX)
        std::cout << "impossible" << std::endl;
    else if (!isprint(static_cast<char>(rawValue_)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(rawValue_) << "'" << std::endl;
}

void Convert::toInt() const {
    std::cout << "int: ";
    if (isnan(rawValue_) || isinf(rawValue_)
        || rawValue_ < INT_MIN || rawValue_ > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(rawValue_) << std::endl;
}

void Convert::toFloat() const {
    std::cout << "float: ";
    if (rawValue_ < LLONG_MIN || rawValue_ > LLONG_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<float>(rawValue_) << "f" << std::endl;
}

void Convert::toDouble() const {
    std::cout << "double: ";
    if (rawValue_ < LLONG_MIN || rawValue_ > LLONG_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << rawValue_ << std::endl;
}
