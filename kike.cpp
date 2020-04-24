#include <iostream>
#include <cmath>

using namespace std;

int redondeo(int n) {
  float k = n; k /= 10; k = round(k); k *= 10;
  return k;
}


int min_vuelto(int monto) {
	
  int monedas_disponibles[3] = {100, 50, 10},
      cantidad_monedas = 0,
	  vuelto = 2000 - redondeo(monto),
	  acumulando_vuelto = 0,
	  index = 0;
  
	  
  while(acumulando_vuelto < vuelto) {

	if((acumulando_vuelto + monedas_disponibles[index]) <= vuelto) {
	   acumulando_vuelto += monedas_disponibles[index];
	   cantidad_monedas++;
	   continue;
	}
	index++;
  }


  return cantidad_monedas;
}


int main() {
  cout << min_vuelto(757);
  return 0;
}


