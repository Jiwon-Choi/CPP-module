#ifndef _WEAPON_H_
# define _WEAPON_H_

# include <iostream>
# include <string>

class Weapon {
    private:
    std::string _type;

    public:
    Weapon(std::string type);
    ~Weapon(void);

    const std::string& getType(void);
    void setType(std::string type);
};

#endif
