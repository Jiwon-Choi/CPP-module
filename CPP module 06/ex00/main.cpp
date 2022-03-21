#include "Convert.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "[!] Argc Error" << std::endl;
        return (0);
    }

    Convert conv(argv[1]);
    if (conv.checkError()) {
        std::cerr << "[!] Error" << std::endl;
        return (0);
    }

    conv.printChar();
    conv.printInt();
    conv.printFloat();
    conv.printDouble();

    return (0);
}
