#include <iostream>
#include <cmath>

using namespace std;

int main() {

  float nota1, nota2, nota3, nota4, nota5;

  cout << "Ingrese las notas 1, 2, 3, 4 y 5" << endl;
  cin >> nota1 >> nota2 >> nota3 >> nota4 >> nota5;

  float min_4primeras = fmin( fmin(nota1, nota2), fmin(nota3, nota4) ),
        min_total = fmin(min_4primeras, nota5),
        promedio = ( (nota1 + nota2 + nota3 + nota4 + nota5) - min_total ) / 4;

  cout << "Dado que tu promedio es: " << promedio << ", tu situacion es: \n";

  if (promedio > 5) {
    cout << "Aprobado(eximido)";
  }

  if (promedio < 3.5) {
    cout << "Reprobado";
  }

  if (5 >= promedio && promedio >= 3.5) {
    cout << "Debes rendir el examen";
  }

  return 0;
}
