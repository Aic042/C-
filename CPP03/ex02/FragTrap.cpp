#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->Bot_Name = name;
    std::cout << "FragTrap ha sido Frag-creado!!" << std::endl;
    this->set_stats(100, 100, 30);
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap ha sido Frag-eliminado" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    // if(this->Hit_Points <= 0)
    //     std::cout << "FragTrap " << this->Bot_Name << " is already dead!" << std::endl;
    std::cout << this->Bot_Name << " solicita permiso para un choca esos 5!" << std::endl;
}
