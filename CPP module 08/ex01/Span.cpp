#include "Span.hpp"

Span::Span(void) : n_(0) {}
Span::Span(unsigned int n) : n_(n) {}
Span::Span(const Span & ref) {
    *this = ref;
}
Span::~Span(void) {}

Span & Span::operator=(const Span & ref) {
    if (this != &ref) {
        n_ = ref.n_;
        vec_ = ref.vec_;
    }
    return (*this);
}

void Span::addNumber(int num) {
    if (vec_.size() >= n_)
        throw CannotStoreException();
    vec_.push_back(num);
}

unsigned int Span::shortestSpan(void) {
    if (vec_.size() < 2)
        throw CannotSpanException();
    std::vector<int> tmp = vec_;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator it = tmp.begin();
    unsigned int shortest = UINT_MAX;
    while (it + 1 != tmp.end()) {
        unsigned int span = *(it + 1) - *it;
        shortest = shortest < span ? shortest : span;
        it++;
    }
    return (shortest);
}

unsigned int Span::longestSpan(void) {
    if (vec_.size() < 2)
        throw CannotSpanException();
    return (*std::max_element(vec_.begin(), vec_.end()) - *std::min_element(vec_.begin(), vec_.end()));
}

void Span::printVector(void) const {
    for (unsigned int i = 0; i < n_; i++)
        std::cout << vec_[i] << " ";
    std::cout << std::endl;
}

const char * Span::CannotStoreException::what() const throw() {
    return ("Not enough capacity");
}

const char * Span::CannotSpanException::what() const throw() {
    return ("Not enough element");
}
