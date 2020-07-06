#include <iostream>

using std::cout;
using std::cin;

void mostrar_numeros(int n) {
 for(int j = n; j > 0; j--) {
 	if( !(j%7) || !(j%3)) continue;
 	cout << j << std::endl;
 }
}

int main() {
 int n = 0;
 cout << "Ingrese numero a mostrar\n";
 cin >> n;
 mostrar_numeros(n);
 return 0;
}
