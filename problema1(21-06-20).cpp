#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void estadisticas(float* notas, int cantidad_alumnos) {
	
   float temp = 0,
		 promedio_tramos[] = {0, 0, 0, 0, 0, 0},
		 promedio_total = 0;
   int   reprobados = 0,
	     tramos[] = {0, 0, 0, 0, 0, 0};
	
	
   for(int j = 0, trunc = 0; j < cantidad_alumnos; j++) {
   	
	   temp = *(notas + j);
	   trunc = temp;
	   
	   if(temp < 4) reprobados++;
	   
	   std::cout << trunc << std::endl;

	   tramos[trunc] += 1;
	   promedio_tramos[trunc] += temp;
	   promedio_total += temp;
   }
   
   cout << "La cantidad de reprobados es: " << reprobados << std::endl;
   cout << "La cantidad de aprobados es: " << cantidad_alumnos - reprobados << std::endl;
   
   float max_tramo = 0, temp_promedio = 0;

   for(int i = 1, length = sizeof tramos / sizeof(tramos[0]); i <= length; i++) {
   	
   	max_tramo = i == length ? (i + 1) : i + .9;
	temp_promedio = tramos[i - 1] != 0 ? ( promedio_tramos[i - 1] / tramos[i - 1]) : 0;
   	

   	cout << "La cantidad de alumnos en el tramo " << i << " - " << max_tramo << " es: " << tramos[i - 1];
   	
   	if(temp_promedio != 0) cout << " y su promedio es: " << temp_promedio << std::endl;
   	else cout << " y no hay promedio al no haber alumnos en este tramo." << std::endl;
   	
   }
   
   cout << "El promedio total de las notas es: " << promedio_total / cantidad_alumnos;
   
}

float notas_alumnos[] = {2.4, 5.6, 2.3, 4.9, 5.1, 3.7, 5.6, 7.0, 4.6, 4.6, 4.6, 6.3};



int main() {

  estadisticas(notas_alumnos, sizeof notas_alumnos / sizeof(notas_alumnos[0]));

  return 0;
}
