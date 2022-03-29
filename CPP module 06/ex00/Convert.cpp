#include "Convert.hpp"

Convert::Convert(void) {}

Convert::Convert(char * inputValue) {
    inputValue_ = inputValue;
    rawValue_ = strtod(inputValue_, &endptr_);
}

Convert::Convert(const Convert & ref) {
    *this = ref;
}

Convert::~Convert(void) {}

Convert& Convert::operator=(const Convert & ref) {
    inputValue_ = ref.inputValue_;
    rawValue_ = ref.rawValue_;
    endptr_ = ref.endptr_;
    return (*this);
}

char Convert::toChar(void) const {
    return (static_cast<char>(rawValue_));
}

int Convert::toInt(void) const {
    return (static_cast<int>(rawValue_));
}

float Convert::toFloat(void) const {
    return (static_cast<float>(rawValue_));
}

double Convert::toDouble(void) const {
    return (static_cast<double>(rawValue_));
}

void Convert::printChar(void) const {
    std::cout << "char: ";
    if (isnan(rawValue_) || isinf(rawValue_)
        || rawValue_ < CHAR_MIN || rawValue_ > CHAR_MAX)
        std::cout << "impossible" << std::endl;
    else if (!isprint(this->toChar()))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << this->toChar() << "'" << std::endl;
}

void Convert::printInt(void) const {
    std::cout << "int: ";
    if (isnan(rawValue_) || isinf(rawValue_)
        || rawValue_ < INT_MIN || rawValue_ > INT_MAX)
        std::cout << "impossible" << std::endl;
    else
        std::cout << this->toInt() << std::endl;
}

void Convert::printFloat(void) const {
    std::cout << "float: ";
    if (isinf(this->toFloat()) && *inputValue_ == '-')
        std::cout << "-inff" << std::endl;
    else if (isinf(this->toFloat()))
        std::cout << "inff" << std::endl;
    else if (rawValue_ < LLONG_MIN || rawValue_ > LLONG_MAX)
        std::cout << "impossible" << std::endl;
    else if (this->toFloat() == this->toInt() && this->toDouble() < std::pow(10, 6))
        std::cout << this->toFloat() << ".0f" << std::endl;
    else
        std::cout << this->toFloat() << "f" << std::endl;
}

void Convert::printDouble(void) const {
    std::cout << "double: ";
    if (isinf(this->toDouble()) && *inputValue_ == '-')
        std::cout << "-inf" << std::endl;
    else if (isinf(this->toDouble()))
        std::cout << "inf" << std::endl;
    else if (rawValue_ < LLONG_MIN || rawValue_ > LLONG_MAX)
        std::cout << "impossible" << std::endl;
    else if (this->toDouble() == this->toInt() && this->toDouble() < std::pow(10, 6))
        std::cout << this->toDouble() << ".0" << std::endl;
    else
        std::cout << this->toDouble() << std::endl;
}

bool Convert::checkError(void) {
    if (*endptr_ == 'f')
        endptr_++;
    if (*endptr_)
        return (true);
    return (false);
}
