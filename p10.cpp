#include <iostream>

using std::cout;
using std::cin;

std::string soluciones(float coef1, float coef2) {
 
 if(coef1 == 0 && coef2 != 0) return "Sin soluciones";
 if(coef1 == 0 && coef2 == 0) return "Infinitas soluciones";
 if(coef1  0) return "Solucion unica";
 
}


int main() {
 cout << soluciones(0, 0);
 return 0;
}
