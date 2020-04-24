#include <iostream>
#include <string>

using namespace std;

int main() {
   string n; cout << "Ingrese su nombre\n"; cin >> n;
   
   for(int j = -1, l = n.length(); j++ < l;) { cout << " " << n[j]  << ", "; }
   return 0;
}
