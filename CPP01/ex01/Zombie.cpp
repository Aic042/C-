#include "libo.hpp"

Zombie::Zombie(){
    std::cout << "Zombie has been created";
}

Zombie::~Zombie(){
    std::cout << "Zombie has been destroyed";
}

void Zombie::set_name(std::string name){
    this->zombie_name = name;
}

void Zombie::announce()
{
    std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ\n";
}
