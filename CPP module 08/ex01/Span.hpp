#ifndef SPAN_HPP_
# define SPAN_HPP_

# include <vector>
# include <exception>
# include <iterator>
#include <iostream>

class Span {
    private:
    unsigned int n_;
    std::vector<int> vec_;

    Span(void);

    public:
    Span(unsigned int n);
    Span(const Span & ref);
    ~Span(void);

    Span & operator=(const Span & ref);

    void addNumber(int num);

    template <typename T>
    void addNumber(T begin, T end) {
        if (vec_.size() + std::distance(begin, end) > n_)
            throw CannotStoreException();
        while (begin != end)
            vec_.push_back(*begin++);
    }

    unsigned int shortestSpan(void);
    unsigned int longestSpan(void);

    void printVector(void) const;

    class CannotStoreException : public std::exception {
        public:
        const char * what() const throw();
    };

    class CannotSpanException : public std::exception {
        public:
        const char * what() const throw();
    };
};

#endif
