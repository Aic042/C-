#include "weapon.hpp"

class HumanB
{
    private: 
        std::string name;
        Weapon &weapon_type;
    public:

    HumanB(std::string name, Weapon *&weapon_type){
        std::cout << this->name << "Has been constructed"; 
    };
    void HumanB_attack(){
        std::cout << this->name << " attacks with " << this->weapon_type << std::endl;
    };
    ~HumanB(){
        std::cout << this->name << "Has been destroyed" << std::endl;
    };
};
