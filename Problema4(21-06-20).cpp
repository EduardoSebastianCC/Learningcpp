#include <iostream>

using std::cout;
using std::cin;

int ordenar_array(int* array, int size) {
	
 for(int i = 0, menor = 0, index = 0, aux = 0; i < size; i++) {
 	
  menor = *(array + i);
 	
 	for(int j = i, temp = 0; j < size; j++) {
 		
 		temp = *(array + j);
 		
 		if(temp < menor) {
		  menor = temp;
		  index = j;
		}
		
	 }
	 
  aux = *(array + i);
  *(array + i) = menor;
  *(array + index) = aux;
	 
 }
 
}

int main() {

 int Arr[] = {45, 21, 78, 43, 17, 33, 75, 23, 66, 98, 2, 15, 27, 71, 30, 68, 81, 44, 1, 53},
		 l = sizeof Arr / sizeof(Arr[0]);
 
 ordenar_array(Arr, l);
 
 for(int cur = 0, temp = 0; cur < l ; cur++) {
 	temp = *(Arr + cur);
	cout << temp << std::endl;
 }

 return 0;
}
