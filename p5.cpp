#include <iostream>

using std::cout;
using std::cin;

unsigned contar_combinaciones(unsigned resultado) {
	
 if(resultado <= 1 || resultado > 12) return 0;
 
 int comb = 0;
 
 for(int par1 = 1; par1 <= 6; par1++) {
 	for(int par2 = 1; par2 <= 6; par2++) {
 		if(par1 + par2 - resultado == 0) {
			comb++;
			break;
		 }
	 }
 }
 return comb;
}

int desplegar_combinaciones() {
 std::string msg = "";
 for(int j = 2; j <= 12; j++) {
	msg = contar_combinaciones(j) == 1 ? " combinacion posible" : " combinaciones posibles";
 	cout << "Hay " << contar_combinaciones(j) << msg << " para obtener " << j << std::endl;
 }

}

int main() {

 
 desplegar_combinaciones();

 return 0;
}
