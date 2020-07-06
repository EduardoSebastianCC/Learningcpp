#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

std::string stored_rut = "";

std::string swap_rut() {
 std::string rut = "";
 
 char aux = 0;
 
 // Data
 cout << "Ingrese su rut:" << std::endl;
 cin >> rut;
 
 stored_rut = rut;
 
 int l = rut.length();
 
 for(int j = 0; j < floor(l/2); j++) {
 	aux = rut[j];
 	rut[j] = rut[(l - 1) - j];
 	rut[(l - 1) - j] = aux;
 }
 
 return rut;
}

int multiplyBy(std::string rut) {
	

 int l = rut.length(),
	 result = 0,
     arr[l] = {},
	 to_multiply[6] = {2, 3, 4, 5, 6, 7};
 
 for(int j = 0; j < l; j++) {

 	arr[j] = std::stoi( rut.substr(j, 1) );
 }
 
 for(int m = 0, index_mult = 0; m < l; m++, index_mult++) {
 	if(index_mult == 6) index_mult = 0;
 	arr[m] *= to_multiply[index_mult];
 }
 
 for(int p = 0; p < l; p++) {
  result += arr[p];
 }
 
 return (11 - result%11);
 
}

int main() {
 int verificador = multiplyBy(swap_rut());
 
 std::string final_verificador = "";
 
 switch(verificador) {
 	case 10: final_verificador = "k"; break;
 	case 11: final_verificador = "0"; break;
	default: final_verificador = std::to_string(verificador);
 }
 
 cout << "Su rut deberia ser: " << stored_rut << "-" << final_verificador;
 
 return 0;
}
