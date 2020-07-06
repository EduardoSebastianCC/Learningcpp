#include <iostream>
#include <stdlib.h>

using std::cout;
using std::cin;

std::string lower(std::string texto) {
 for(int m = 0, l = texto.length(); m < l; m++) {
 	texto[m] = tolower(texto[m]);
 }
 return texto;
}


void cachipun() {
 std::string nombreA = "",
			 nombreB = "",
			 jugadaA = "",
			 jugadaB = "";

			 
 unsigned puntosA = 0, puntosB = 0;
			 
 cout << "Ingrese el nombre del primer jugador y del segundo" << std::endl;
 cin >> nombreA >> nombreB;
 
 while(puntosA < 3 && puntosB < 3) {

 cout << "Ingrese la jugada de " << nombreA << " y la de " << nombreB << std::endl;
 cin >> jugadaA >> jugadaB;
 
 jugadaA = lower(jugadaA);
 jugadaB = lower(jugadaB);
 
 cout << jugadaA;
 
 if(jugadaA == jugadaB) {
 	cout << nombreA << ": " << jugadaA << std::endl;
 	cout << nombreB << ": " << jugadaB << std::endl;
 	cout << "Marcador: " << nombreA << ": " << puntosA << " | " << nombreB << ": " << puntosB << std::endl;
 	continue;
 }
 
 if(jugadaA == "papel") {
 	if(jugadaB == "piedra") puntosA++;
 	else puntosB++;
 }
 else if(jugadaA == "tijera") {
	if(jugadaB == "piedra") puntosB++;
	else puntosA++;
 }
 else if(jugadaA == "piedra") {
	if(jugadaB == "papel") puntosB++;
	else puntosA++;
 }
	system("CLS");
    cout << nombreA << ": " << jugadaA << std::endl;
 	cout << nombreB << ": " << jugadaB << std::endl;
 	cout << "Marcador: " << nombreA << ": " << puntosA << " | " << nombreB << ": " << puntosB << std::endl;
 	

 }
 std::string ganador = puntosA > puntosB ? nombreA : nombreB;
 cout << "El ganador fue: " << ganador;
}

int main() {
 cachipun();
 return 0;
}
