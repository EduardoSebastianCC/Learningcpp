#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

int binary_representation(int base_decimal) {

  int max_size = 0;
  
  // Obtener maxima cantidad de divisiones
  while( pow(2, max_size) <= base_decimal ) { max_size++; }
	
  int digitos_binarios[max_size] = {};
  
  // Rellenar array con -1
   for(int m = 0; m < max_size; m++) { digitos_binarios[m] = -1; }
   
   int temp_decimal = base_decimal,
	   counter = 0;
   
   while(temp_decimal >= 1) {
	digitos_binarios[max_size - 1 - counter] = temp_decimal%2;
	temp_decimal = digitos_binarios[max_size - 1 - counter] == 1 ? (temp_decimal - 1)/2 : temp_decimal/2;
	counter++;
   }
   
   // Mostrar digitos
   
   for(int m = 0; m < max_size; m++) {
	 if(digitos_binarios[m] == -1) continue;
	 cout << digitos_binarios[m];
   }
   
   return 0;
}


int main() {
	
 binary_representation(1974);
 
 return 0;
}
