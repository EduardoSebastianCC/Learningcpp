#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int mirrorv2(int number) {
 int formed_number = 0, digits = (std::to_string(number)).length(), counter = 1;
 while(number > 0) {
  formed_number += number%10 * pow(10, digits - counter);
  number /= 10;
  counter++;
 }
 return formed_number;
}

int main() {
 cout << mirrorv2(2842);
 return 0;
}
