#include "lib.hpp"

void Zombie::announce()
{
    std::cout << this->zombie_name << ": BraiiiiiiinnnzzzZ\n";
}
Zombie::Zombie(std::string name){  //Constructor
    zombie_name = name;
    std::cout << zombie_name << " Ha sido creado\n";
}
Zombie::~Zombie(){  //Destructor
    std::cout << zombie_name << " ha sido destruido\n";
}