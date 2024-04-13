#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {

private:
  Weapon *_weapon;
  std::string _name;

public:
  /* implement constructor with Weapon; */
  HumanB(const std::string &name);
  ~HumanB();

  void setName(const std::string &name);
  const std::string &getName();
  void setWeapon(Weapon &weapon);
  const std::string &getWeapon();
  void attack() const;
};

#endif // !HUMANB_HPP