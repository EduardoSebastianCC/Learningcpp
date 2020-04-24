#include <iostream>
#include <cmath>

using namespace std;

int redondeo(int n) {
  float k = n; k /= 10; k = round(k); k *= 10;
  return k;
}


int min_vuelto(int monto) {

  int monedas_disponibles[3] = {100, 50, 10},
	  monto_sin_redondeo = monto,
      cantidad_monedas = 0,
	  vuelto = 2000 - redondeo(monto),
	  acumulando_vuelto = 0,
	  index = 0,
	  tipo_de_moneda[3] = {0, 0, 0};


  while(acumulando_vuelto < vuelto) {

	if((acumulando_vuelto + monedas_disponibles[index]) <= vuelto) {
	   acumulando_vuelto += monedas_disponibles[index];
	   cantidad_monedas++;
	   tipo_de_moneda[index]++;;
	   continue;
	}
	index++;
  }
  
  cout << "El monto a pagar que ingresaste es: " << monto_sin_redondeo << endl;
  cout << "El monto a pagar redondeado es: " << redondeo(monto) << endl;
  cout << "El vuelto a entregar es: " << vuelto << endl;
  cout << "La cantidad de monedas de 100 son: " << tipo_de_moneda[0] << endl;
  cout << "La cantidad de monedas de 50 son: " << tipo_de_moneda[1] << endl;
  cout << "La cantidad de monedas de 10 son: " << tipo_de_moneda[2] << endl;
  cout << "La cantidad total de monedas son:" << cantidad_monedas++;
}


int main() {
  min_vuelto(757);
  return 0;
}


