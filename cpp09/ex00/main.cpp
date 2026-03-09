#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "Need 1 arguments" << std::endl;
    return (1);
  }
  try {
    BitcoinExchange btc("data.csv");
    btc.convertVals(argv[1]);
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}
