#include <iostream>
using namespace std;

int aicharllu() {
 // Obtener datos
 double por_pagar, paid;
	cout << "Welcome!" << endl;
	cout << "Total? " << endl;
	cin >> por_pagar;
	cout << "Paid? " << endl;
	cin >> paid;
	double change = paid - por_pagar; // vuelto
	if(change == 0) { // Pagó lo justo
		cout << "No change";
		return 0; // Termina la función
	}
	else if(change < 0) { // Pagó menos
		cout << "Not enough, insert: $" << -change;
		return 0; // Termina la función
	}
	else { // Procede a dar los detalles de la transacción
		cout << "Change: " << change << endl;
	    cout << "Detail: " << endl; 
	}

 // Fin obtener datos
 
 // Diseñar detalles del vuelto
  float divisas[12] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
  float accum = 0; int j = 0; float tempDivisa; unsigned veces_utilizada = 0; // Cuantas veces se ha utilizado una cierta divisa
  while(accum < change){
  	tempDivisa = divisas[j]; // Recorre las divisas
  	if(accum + tempDivisa <= change) {
  		accum += tempDivisa;
  		veces_utilizada += 1;
  		if(accum + tempDivisa > change) {
  		  if(tempDivisa >= 1) { cout << veces_utilizada << " x " << "$" << tempDivisa << endl; } // Mensaje para los dolares
		  else { cout << veces_utilizada << " x " << tempDivisa*100 << "c" <<endl; } // Mensaje para los centavos
  		  veces_utilizada = 0;
		}
	  } else {
	  	j++;
	  }
	  
  }
	  
 // Fin diseño
 return 0;
}

int main() {
 aicharllu();
 return 0;
}
