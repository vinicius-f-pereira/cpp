#include "BitcoinExchange.hpp"
#include "Defines.hpp"
#include <exception>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

Exchange::Exchange() : _bitcoinPrices(0) {}

Exchange::Exchange(const std::string &file) : _bitcoinPrices(0) {
  std::ifstream fl(file.c_str());
  if (!fl.is_open())
    throw std::runtime_error("could not open file.\n");
	
	std::string line;
	std::getline(fl, line);
	while(std::getline(fl, line)) {
		std::istringstream iss(line);
	}

}

Exchange::~Exchange() {}

Exchange::Exchange(const Exchange &rhs) { *this = rhs; }

Exchange &Exchange::operator=(const Exchange &rhs) {
  if (this != &rhs) {
    this->_bitcoinPrices = rhs._bitcoinPrices;
  }
  return *this;
}