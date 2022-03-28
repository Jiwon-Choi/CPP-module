#ifndef ARRAY_HPP_
# define ARRAY_HPP_

# include <iostream>
# include <exception>

template <typename T>
class Array {
    private:
    T *arr_;
    unsigned int size_;

    public:
    Array(void) : arr_(NULL), size_(0) {}
    Array(unsigned int n) : arr_(new T[n]), size_(n) {}
    Array(const Array & ref) {
        *this = ref;
    }
    ~Array(void) {
        delete[] arr_;
    }

    Array & operator=(const Array & ref) {
        if (this != ref) {
            delete[] arr_;
            size_ = ref.size_;
            arr_ = new T[size_];
            for (unsigned int i = 0; i < size_; i ++)
                arr_[i] = ref.arr_[i];
        }
        return (*this);
    }

    T & operator[](const unsigned int idx) const {
        if (idx >= size_)
            throw OutOfRangeException();
        return (arr_[idx]);
    }

    unsigned int size(void) const {
        return (size_);
    }

    class OutOfRangeException: public std::exception {
        private:
        virtual const char * what() const throw() {
            return ("Out of range");
        }
    };
};

#endif
