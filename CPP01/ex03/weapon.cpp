#include "weapon.hpp"
#include "humanA.hpp"
#include "humanB.hpp"

Weapon::Weapon(std::string type)
{
	this->objtype = type;
}

Weapon::~Weapon()
{
	std::cout << "Weapon has been destroyed" << std::endl;
}

const std::string& Weapon::getType() const{
	return this->objtype;
}

void Weapon::setType(std::string type)
{
	this->objtype = type;
}
