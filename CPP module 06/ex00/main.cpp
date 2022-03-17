#include "Convert.hpp"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "[!] Argc Error" << std::endl;
        return (0);
    }
    // std::string inputValue = argv[1];
    // std::cout << inputValue << std::endl;
    Convert conv(argv[1]);
    conv.toChar();
    conv.toInt();
    conv.toFloat();
    conv.toDouble();
    return (0);
}
