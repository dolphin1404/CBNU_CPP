#include "Ram.h"

#include "iostream"

Ram::Ram() {
  size = 100 * 1024;
  for (int i = 0; i < size; i++) {
    mem[i] = 0;
  }
};

Ram::~Ram() { std::cout << "메모리 제거됨\n"; };

char Ram::read(int address) {
  if (address < 0 || address >= size) {
    std::cout << "Error: Address out of range\n";
    return -1;
  }
  return mem[address];
};

void Ram::write(int address, char value) {
  if (address < 0 || address >= size) {
    std::cout << "Error: Address out of range\n";
    return;
  }
  mem[address] = value;
}
