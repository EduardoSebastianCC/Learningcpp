#include <iostream>

using std::cout;
using std::cin;

bool primero = true;

bool check_elem(int* array, int size, int elem) {
	
 for(int cur = 0, temp = 0; cur < size; cur++) {
   if(*(array + cur) == elem) return true;
 }
 
 return false;
}


bool is_subset(int* array1, int* array2, int size1, int size2) {
  
  if(size2 > size1) {
  	primero = false;
  	return is_subset(array2, array1, size2, size1);
  }
  
  for(int cur = 0, temp = 0; cur < size2; cur++) {
	temp = *(array2 + cur);
	if( !( check_elem(array1, size1, temp) ) ) return false;
  }
  
  return true;
}

int main() {
	
 int Arr[] = {45, 2, 78, 43, 23, 66, 98,  15,  71, 30},
	 Brr[] = {12, 5, 67, 78, 13, 7},
	 Crr[] = {45,  78, 43, 23, 66, 98, 15, 30},
	 Drr[] = {45, 2, 78, 43, 23, 66, 98, 15, 71, 30, 100, 200, 300};
	 
 if( is_subset( Arr, Crr, sizeof Arr / sizeof(Arr[0]), sizeof Crr / sizeof(Crr[0]) ) ) {
   if(primero) cout << "El segundo array es subconjunto del primero";
   else cout << "El primer array es subconjunto del segundo";
 }
	
 return 0;
}
