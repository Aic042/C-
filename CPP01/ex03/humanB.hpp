#include "weapon.hpp"

class HumanB
{
    private: 
        std::string name;
        Weapon *weapon_type;
    public:
        HumanB(std::string name);
        void attack();
        ~HumanB();
		void setWeapon(Weapon &obj);
};
