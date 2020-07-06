#include <iostream>

using std::cout;
using std::cin;

unsigned pow(int b, int e) {
 int p = 1;
 for(int i = 1; i <= e; i++) {
 	p *= b;
 }
 return p;
}

unsigned cantidad_digitos(int numero) {
	
 unsigned cantidad_digitos2 = 0;
 
 while( pow(10, cantidad_digitos2) <= numero) {
   cantidad_digitos2++;
 }
 
 
 
 return cantidad_digitos2;
}


int main() {
 int n = 0;
 cout << "Ingrese numero para calcular sus digitos:\n";
 cin >> n;
 cout << cantidad_digitos(n);
 return 0;
}
