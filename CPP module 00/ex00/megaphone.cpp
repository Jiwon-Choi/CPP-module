#include <iostream>

char to_upper(char c) {
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 'A');
    return (c);
}

int main(int argc, char **argv) {
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (*(++argv)) {
            while (**argv) {
                std::cout << to_upper(**argv);
                (*argv)++;
            }
        }
        std::cout << std::endl;
    }
    return (0);
}