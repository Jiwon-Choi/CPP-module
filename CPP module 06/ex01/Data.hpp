#ifndef DATA_HPP_
# define DATA_HPP_

# include <iostream>
# include <string>
# include <stdint.h>

class Data {
    private:
    std::string id_;
    int blackHole_;
    double level_;

    public:
    Data(void);
    Data(const Data & ref);
    ~Data(void);

    Data & operator=(const Data & ref);

    const std::string & getId(void) const;
    const int & getBlackHole(void) const;
    const double & getLevel(void) const;
};

uintptr_t serialize(Data * ptr);
Data * deserialize(uintptr_t raw);

#endif
