#include "libo.hpp"

Zombie::Zombie(){  //Constructor
    std::cout << " Un zombie mas Ha sido creado\n";
}
Zombie::~Zombie(){  //Desstructor
    std::cout << " Un zombie mas ha sido destruido\n";
}

void Zombie::name_setter(std::string name){
    this->zombie_name = name;
}
std::string Zombie::name_getter(){
    return (this->zombie_name);
}

void Zombie::announce()
{
    std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ\n";
}
