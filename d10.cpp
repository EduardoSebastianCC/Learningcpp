#include <iostream>

using std::cin;
using std::cout;

int mirror(int number) {
 std::string number_string = std::to_string(number);

 for(int m = 0, aux = 0, size = number_string.length(); m < size/2; m++) { // n/2 max steps independently if the number is odd or even
 	aux = number_string[m];
 	number_string[m] = number_string[( size - 1 ) - m];
 	number_string[ (size - 1) - m] = aux;
 }
 return std::stoi(number_string);
}
/*
int mirrorv2(int number) {
 int formed_number = 0, digits = (std::to_string(number)).length(), counter = 1;
 while(number > 0) {
  formed_number += number%10 * pow(10, digits - counter);
  number /= 10;
  counter++;
 }
 return formed_number;
}
*/
bool is_prime(int number) {
	
	if(number < 2 || number%3 == 0 || number%2 == 0 || number%5 == 0 || number%7 == 0 || number%11 == 0)  return number == 2 || number == 3 || number == 5 ||
	number == 7 || number == 11; // Avoid 2*3*5*7*11 numbers
	
	for(int m = 13; m < (number/2) + 1; m += (m+2)%3 == 0 ? 4 : 2) {
		 	if(number%m == 0) return false;
		 }

		 
		 return true;

}

int prime_index(int number) {

  if(!is_prime(number)) return -1;
	
  int number_index = 1;
  
  for(int m = 2; m < number; m++) {

  	if(is_prime(m)) number_index++;
  }
  
  return number_index;
}

int digit_products(int number) {
  std::string number_as_string = std::to_string(number), cur = "";
  int product = 1;
  
  for(int k = 0, size = number_as_string.length(); k < size; k++) {
	cur = number_as_string[k];
	product *= std::stoi(cur);
  }
  return product;
}

bool is_sheldon(int number) {
	
 if(!is_prime(number)) return false;
	
 int number_prime_index = prime_index(number),
	 number_mirror = mirror(number),
	 number_prime_mirror_index = prime_index(number_mirror);

	 
 return number_prime_mirror_index != -1 && number_prime_index
         == mirror(number_prime_mirror_index) && number_prime_index == digit_products(number);
}

void check_for_sheldon() {
	
 std::string state = "";
 
 for(int m = 0; m < 14000; m++) {
 	if(m%2000 == 0) cout << "Iterating over the number " << m << std::endl;
	if(!is_sheldon(m)) continue;
	cout << "The number " << m << " is a sheldon number!" << std::endl;
 }
}

int main() {
	
 //check_for_sheldon();
 //cout << is_prime(37);
 //check_for_sheldon();
 for(int j = 0; j < 1000; j++) {
 	
 	if(is_prime(30043))cout << "Numero primo: " << j << std::endl;
 }
 return 0;

}
