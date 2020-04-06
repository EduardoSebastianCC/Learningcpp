#include <iostream>

using namespace std;

int notas(){
	float s1, s2, c1, c2, c3, t1, t2, t3, t4, t5; // s tareas, c controles, t tareas
	cout << "Ingrese nota de solemne 1 y 2" << endl;
	cin >> s1 >> s2;
	cout << "Ingrese nota de control 1, 2 y 3" << endl;
	cin >> c1 >> c2 >> c3;
	cout << "Ingrese nota de tarea 1, 2, 3, 4 y 5" << endl;
	cin >> t1 >> t2 >> t3 >> t4 >> t5;
	
	float promedio$solemnes = (s1+s2)/2, promedio$controles = (c1+c2+c3)/3, promedio$tareas = (t1+t2+t3+t4+t5)/5;
	
	float nota$presentacion = .7*promedio$solemnes + .15*(promedio$controles + promedio$tareas);
	
	if(promedio$controles >= 4 && promedio$tareas >= 4) {
		if(promedio$solemnes >= 5) {
			cout << "Eximido con nota de presentacion: " << nota$presentacion;
			return 0;
		}
		cout << "Rinde examen con nota de presentacion: " << nota$presentacion;
	} else {
		if(promedio$controles >= 4 && promedio$tareas <= 4) { cout << "Reprobado por tareas" << endl; return 0; }
		if(promedio$tareas >= 4 && promedio$controles <= 4) { cout << "Reprobado por controles" << endl; return 0; }		
		cout << "Reprobado por tareas y controles(el wea)";	
	}
	
}


int main() {
	notas();
	return 0;
}
