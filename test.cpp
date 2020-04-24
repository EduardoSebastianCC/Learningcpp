#include <iostream>
#include <string>

using namespace std;

int main() {
   string n, t; cout << "Ingrese su nombre\n"; cin >> n;

   for(int j = -1, l = n.length(); j++ < l - 1;) {
	if(j == (l - 1)) { cout << " \" " << n[j] << "\" "; break;}
	cout << " \" " << n[j] << "\", ";
    }
   return 0;
}
