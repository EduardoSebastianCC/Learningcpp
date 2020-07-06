#include <iostream>

using std::cout;
using std::cin;

void suma(unsigned n) {
 int sum1 = 0;
 for(int j = 1; j <= n; j++) {
   sum1 += j;
 }
 cout << "S1: " << sum1 << std::endl;
 cout << "S2:" << n*(n+1)/2 << std::endl;
 std::string msg = (sum1 == n*(n+1)/2 ) ? "Son iguales" : "Son distintas";
 cout << msg;
}


int main() {
 unsigned n = 0;
 cout << "Ingrese un natural\n";
 cin >> n;
 suma(n);
 return 0;
}
