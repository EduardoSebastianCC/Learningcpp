#include <iostream>

#include <cmath>

using namespace std;

int problema1(int k = -2005) {
  if (k < 3709) {
    cout << k << endl;
    problema1(++k);
  }
  return 0;
}

int problema2() {
  int numero1, numero2, numero3_patron;
  cout << "Ingrese 3 numeros\n";
  cin >> numero1 >> numero2 >> numero3_patron;
  int max = fmax(numero1, numero2);
  int min = fmin(numero1, numero2);

  for (; numero1 < max + 1; min++) {
    if (min % numero3_patron) cout << min << endl;
  }
  return 0;
}

int problema3() {
  for (int j = 1, helper = 1; j < 13; helper++) { // Generar pares (1,i)
    if (helper > 12) { // Siguiente factor
      j++;
      helper = 1;
      cout << endl;
    }
    if (j < 13) {
      if (helper == 1) cout << "La tabla del " << j << ":  " << j * helper << " ";
      else cout << j * helper << " ";
    }
  }
  return 0;
}

int problema4() {
  int numero, promedio;
  for (int j = 0; j < 15; j++) {
    cout << "Ingrese un numero\n";
    cin >> numero;
    promedio += numero;
  }
  cout << "El promedio es: " << promedio / 15;
  return 0;
}

int problema5() {
  int precioActual, cantidadVendida, cantidadSobrante, totalVendido, totalSobrante;
  for (int j = 0; j < 300; j++) {
    cout << "Ingrese el precio del producto numero " << j << " la cantidad vendida y sobrante: (en ese orden)\n";
    cin >> precioActual >> cantidadVendida >> cantidadSobrante;

    totalVendido += precioActual * cantidadVendida;
    totalSobrante += precioActual * cantidadSobrante;
  }
  cout << "Se han vendido: " << totalVendido << "$\n";
  cout << "Ha sobrado: " << totalSobrante << "$";
  return 0;
}

int main() {
  problema1();
  return 0;
}
