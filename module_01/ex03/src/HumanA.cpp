#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) {
  this->_name = (name);
  this->my_weapon = &weapon;
}

HumanA::~HumanA() {}

const std::string &HumanA::getName() { return _name; }

void HumanA::setName(const std::string &name) { _name = name; }

void HumanA::setWeapon(Weapon weapon) { *my_weapon = weapon; }

const std::string &HumanA::getWeapon() { return my_weapon->getType(); }

void HumanA::attack() {
  std::cout << this->getName() + " attacks with their " << getWeapon()
            << std::endl;
}