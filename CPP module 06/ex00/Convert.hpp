#ifndef CONVERT_HPP_
# define CONVERT_HPP_

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <limits>

class Convert {
    private:
    const char * inputValue_;
    double rawValue_;
    char * endptr_;

    Convert(void);

    public:
    Convert(char * inputValue);
    Convert(const Convert & ref);
    ~Convert(void);

    Convert& operator=(const Convert & ref);

    char toChar(void) const;
    int toInt(void) const;
    float toFloat(void) const;
    double toDouble(void) const;

    void printChar(void) const;
    void printInt(void) const;
    void printFloat(void) const;
    void printDouble(void) const;

    bool checkError(void) const;
};

#endif
