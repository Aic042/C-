#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap("Fragtrap")
{
    this->Frag_Name = name;
    std::cout << "FragTrap ha sido Frag-creado!!" << std::endl;
    this->set_stats(100, 50, 20);
}
FragTrap::~FragTrap(){
    std::cout << "FragTrap ha sido Frag-eliminado" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    // if(this->Hit_Points <= 0)
    //     std::cout << "FragTrap " << this->Frag_Name << " is already dead!" << std::endl;
    std::cout << this->Frag_Name << " solicita permiso para un choca esos 5!" << std::endl;
}
