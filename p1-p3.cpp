#include <iostream>
#include <cmath>
using namespace std;


int problema1() {
    int cantidadPaises;
    cout << "Ingrese la cantidad de paises participantes\n";
    cin >> cantidadPaises;

    string paisActual;

    for(int i = 0; i < cantidadPaises; i++) {

      cout << "Ingrese el pais participante\n";
      cin >> paisActual;

      for(int j = 0,sumaTotal = 0, puntajeCiudad, flag; j < 15; j++) {

      cout << "Ingrese el puntaje de la ciudad Numero " << (j + 1)<< endl;
      cin >> puntajeCiudad;
      sumaTotal += puntajeCiudad;

      if(sumaTotal > 80) {
        cout << paisActual << " es un pais TOP turistico\n\n";
        break;
      }

      else if(j == 2) {
        cout << paisActual << " NO es un pais TOP turistico\n\n";
      }

      }

    }
    return 0;
}

int problema2() {

	long long int numero, numeroTemp; bool estado = false;

	cout << "Ingrese un numero\n";
	cin >> numero;
	//  10^(c-1) <= n <= 10^c, donde c = cifras, ya que 10^c tiene 1(000...0)  c ceros y por tanto c+1 cifras y por tanto mayor
	// La menor potencia de 10 mayor que un numero la obtenemos por fuerza bruta probando hasta que la diferencia sea positiva
	// De tal manera que la potencia k, indicará las cifras.
	// En los casos especiales en que el numero sea tambien potencia de 10, la diferencia será 0, pero no es mayor y por tanto
	// realizará el ciclo otra vez y ahí obtendrá el mayor. Supongamos 1000 = 1000 < 10^4 y 4 serás las cifras de 1000.
	for(long long int k = 1; !estado; k++) {
		
	  if( ( pow(10,k) - abs(numero) ) > 0) {
	  	cout << "La cantidad de cifras del numero es: " << k;
		estado = !estado;
	  }
	}
	
	return 0;
}

int problema2_forma2(){
    /* Suceciones sucesivas, sabiendo que si n < 10^k entonces n mod 10^k = n, cuando esto suceda
	   hemos encontrado la menor potencia de 10 mayor que n y ya que esta menor potencia tiene "k" ceros y "1" 1 bastará
	   con mostrar k.
	   En caso negativo -10^k < a < -10^k-1, basta con multiplicar todo por -1, 10^k > a > 10^k-1 y seguir con el algoritmo.
    */
	long long int numero, numeroTemp; bool estado = false;

	cout << "Ingrese un numero\n";
	cin >> numero;

	for(long long int j = 1, powS; !estado; j++) {
		
	  powS = pow(10, j);
      numeroTemp = abs(numero) % powS;
      
	  if(numeroTemp == abs(numero)) {
	  	cout << "La cantidad de cifras del numero es: " << j;
		estado = !estado;
	  }
	  
	}
	return 0;
}

int problema3() {
	
	long long unsigned numero;
	cout << "Ingrese un numero natural\n";
	cin >> numero;

    while(numero != 1) {
    	
	 cout << "El numero ingresado es: " << numero << endl;
	 
	 if(!(numero%2)) { // Caso par
	   numero /= 2;
	   cout << "El resultado de aplicarle la conjetura al ser par es: " << numero << endl;
	   continue;
	 }
	 
	 numero = 3*numero + 1; // Caso impar
	 cout << "El resultante de aplicarle la conjetura al ser impar es: " << numero << endl;
	 
	}

	return 0;
}


