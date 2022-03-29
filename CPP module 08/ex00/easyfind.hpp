#ifndef EASYFIND_HPP_
# define EASYFIND_HPP_

# include <iostream>
# include <algorithm>
# include <exception>

class NotFoundException: public std::exception {
    public:
    const char * what() const throw() {
        return ("Not Found!");
    }
};

template <typename T>
typename T::iterator easyfind(T t, int n) {
    typename T::iterator it = std::find(t.begin(), t.end(), n);
    if (it == t.end())
        throw NotFoundException();
    return (it);
}

#endif
