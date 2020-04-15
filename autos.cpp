#include <iostream>

using namespace std;

int main() {
	string estado, tipo; bool flag = 1, flag2 = 1; double valor, precio, seguro, pagado; int anio; char n = 164;
	do {
	 cout << "Ingrese estado de su vehiculo: (nuevo o usado)\n";
	 cin >> estado;
	 if(estado == "nuevo" || estado == "usado") { flag = 0; }
	} while(flag);
	
	do {
	 cout << "Ingrese tipo de vehiculo: (auto, moto, camioneta, arrastre)\n";
	 cin >> tipo;
	 if(tipo == "auto" || tipo == "moto" || tipo == "camioneta" || tipo == "arrastre") flag2 = !flag2;
	}while(flag2);

	if(tipo == "auto") seguro = 4990;
	if(tipo == "moto") seguro = 31500;
	if(tipo == "camioneta") seguro = 6890;
	if(tipo == "arrastre") seguro = 3500;
	
	if(estado == "nuevo") {
	 cout << "Ingrese precio del auto: \n";
	 cin >> precio;
	 cout << "El valor de su patente a pagar es: " << precio * .025 << endl;
	 cout << "El valor del seguro de su vehiculo es: " << seguro;
	 return 0;
	}
	cout << "Ingrese el a" << n << "o de compra de su vehiculo:\n";
	cin >> anio;
	if(anio < 1960) { cout << "El valor de su patente a pagar es: " << 17000 << endl; cout << "El valor del seguro de su vehiculo es: " << seguro; return 0; }
	cout << "Ingrese lo pagado el a" << n << "o pasado\n";
	cin >> pagado;
	if(anio < 2000) { cout << "El valor de su patente a pagar es: " << pagado * 0.946; cout << "El valor del seguro de su vehiculo es: " << seguro; return 0;}
	cout << "El valor de su patente a pagar es: " << pagado * 0.985 << endl;
	cout << "El valor del seguro de su vehiculo es: " << seguro;
 	return 0;
}
