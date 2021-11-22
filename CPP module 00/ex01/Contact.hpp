#include <iostream>
#include <string>
#include <iomanip>

class Contact {
    private:
    static std::string field_name[5];
    std::string field[5];

    public:
    void InputInfo(void);
    void PreviewInfo(void);
    void ViewInfo(void);
};
