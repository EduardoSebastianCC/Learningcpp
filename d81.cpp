#include <iostream>

using std::cout;
using std::cin;

std::string low(std::string text) {
 for(int j = 0, l = text.length(); j < l; j++) {
	text[j] = toupper(text[j]);
 }
 return text;
}

int main() {

 std::string texto_usuario = "";
 
 cout << "Ingrese su texto" << std::endl;
 std::getline(cin, texto_usuario);
 
 std::string lower = low(texto_usuario);
 
 cout << "su texto modificado es: " << lower;

 return 0;
}
