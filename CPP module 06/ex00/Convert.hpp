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

    Convert(void);

    public:
    Convert(char * inputValue);
    Convert(const Convert & ref);
    ~Convert(void);

    Convert& operator=(const Convert & ref);

    void toChar(void) const;
    void toInt(void) const;
    void toFloat(void) const;
    void toDouble(void) const;
};

#endif
