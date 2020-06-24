#include <iostream>

using std::cout;
using std::cin;

int frecuencia(int* array, int size, int value) {
	
  int times = 0;

  for(int cur = 0, temp = 0; cur < size; cur++) {
	temp = *(array + cur);
	if(temp == value) times++;
  }
  
  return times;
}

int main() {

 int Arr[] = {45, 2, 78, 43, 23, 66, 98, 2, 15, 2, 71, 30};
 
 cout << frecuencia(Arr, sizeof Arr / sizeof(Arr[0]), 99);
 
 return 0;
}
