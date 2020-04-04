#include <iostream>
using namespace std;

int sumaypromedio() {

int numeros[10] = {0}; int temp, suma, promedio, flag;

for(unsigned k = 0; k < 10; k++) {
	cout << k + 1 << ") Ingrese un numero" << endl;
	cin >> numeros[k];
}

for(unsigned k = 0; k < 10; k++) {
	temp = numeros[k];
	if(temp < 0) { suma += temp; } 
	else { promedio += temp; flag++;}
}
 cout << "La suma de los enteros negativos es: " << suma << endl;
 cout << "El promedio de los numeros no negativos es: " << promedio/flag << endl;

 return 0;
 
}

int main() {
 sumaypromedio();
 return 0;
}


