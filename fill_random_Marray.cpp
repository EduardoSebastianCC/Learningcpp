#include <stdlib.h>


void fill_random_Marray(int* Marray, unsigned columns, unsigned rows) { // Example: fill_random_Marray(arrayM, 15, 8)
	
  int already[columns*rows] = {},
		random_float_number = 0;
  bool contained = false;
	
  for(int j = 0, acc = 0; j < columns*rows; j++) {
	 random_float_number = ( rand() % (columns*rows +1));
	 contained = false;
	 
	 for(int k = 0; k < columns*rows; k++) {
		if(already[k] == random_float_number) {
			contained = true;
			break;
		}
	 }
	 
	 if(contained) j--;
	 else {
		*(Marray + j) = random_float_number;
		already[acc] = random_float_number;
		acc++;
	 }
  }
	
  
}


