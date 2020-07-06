#include <iostream>

using std::cout;
using std::cin;


int main() {
	
 unsigned n = 0; int mayor = -1, temp = 0;

 cout << "Ingrese cantidad de numeros a ingresar\n";
 cin >> n;
 
 for(int j = 0; j < n; j++) {
 	cout << "Ingrese numero " << (j+1) << std::endl;
	cin >> temp;
	if(temp > mayor) mayor = temp;
 }
 
 cout << "El mayor es: " << mayor;

 return 0;
}
