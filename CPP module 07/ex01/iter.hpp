#ifndef ITER_HPP_
# define ITER_HPP_

template <typename T>
void iter(T *arr, int len, void (*f)(T const & ref)) {
    for (int i = 0; i < len; i++)
        f(arr[i]);
}

#endif
