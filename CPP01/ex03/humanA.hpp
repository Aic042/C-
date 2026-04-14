#include "weapon.hpp"

class HumanA
{
    private: 
        std::string name;
        Weapon* weapon_type;
    public:

    HumanA(std::string name, Weapon &weapon_type){
        std::cout << this->name << "Has been constructed"; 
    }
    void HumanA_attack(){
        std::cout << this->name << " attacks with " << this->weapon_type << std::endl;
    }
    ~HumanA(){
        std::cout << this->name << "Has been destroyed" << std::endl;
    };
};