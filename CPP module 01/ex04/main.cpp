#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "[Error] ./replace [filename] [str1] [str2]" << std::endl;
        return (-1);
    }

    std::string filename = argv[1];
    std::string strOld = argv[2];
    std::string strNew = argv[3];

    std::ifstream fin(filename);
    std::ofstream fout(filename + ".replace");

    if (fin.fail()) {
        std::cout << "[Error] No such file" << std::endl;
        return (-1);
    }

    bool newLine = false;

    while (!fin.eof()) {
        if (newLine == true)
            fout << std::endl;
        std::string line;
        fin >> line;
        std::string::size_type offset = 0;
        while ((offset = line.find(strOld, offset)) != std::string::npos) {
            fout << line.substr(0, offset);
            line = line.substr(offset + strOld.length());
            offset = 0;
            fout << strNew;
        }
        fout << line;
        newLine = true;
    }

    fin.close();
    fout.close();
    return (0);
}
