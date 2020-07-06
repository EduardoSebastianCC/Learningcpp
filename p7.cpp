#include <iostream>

using std::cout;
using std::cin;

std::string mas_larga() {

 int times = 0;
 
 std::string larger = "", temp_string = "";
 
 cout << "Ingrese la cantidad de palabras a ingresar\n";
 cin >> times;

 for(int j = 1; j <= times; j++) {
 	cout << "Ingrese la palabra " << j << ". :";
 	cin >> temp_string;
 	cout << "\n";
 	if(temp_string.length() > larger.length() ) larger = temp_string;
 }
 
 return larger;
 
}

int main() {
 cout << "La palabra mas larga es: " << mas_larga();
 return 0;
}
