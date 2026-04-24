#include "weapon.hpp"

class HumanA
{
    private: 
        std::string name;
        Weapon &weapon_type;
    public:
        HumanA(std::string name, Weapon &weapon_type);
        void attack();
        ~HumanA();

};