#include <iostream>

using std::cout;
using std::cin;

int bounded(int n) {
 return n >= 1 && n <= 8;
}



int* get_mov() {

  int coords[2] = {0, 0},
	  movs_posibles[8][2] = {},
	  cur_movs = 0;


   // fill with -1 as error flag
  for(int j = 0; j < 8; j++) {
  	for(int m = 0; m < 2; m++) {
	 movs_posibles[j][m] = -1;
    }

  }
  
  cout << "Ingrese la fila y columna: " << std::endl;
  cin >> coords[0] >> coords[1];
  
  while(cin.fail() | coords[0] > 8 || coords[0] < 0 || coords[1] > 8 || coords[1] < 0) {

	 cout << "Posicion invalida.." << std::endl;

	 // Limpiamos
	 cin.clear();
	 cin.ignore(INT_MAX, '\n');
	 //coords[0] = 0; coords[1] = 0;
	 
	 cout << "Ingrese la fila y columna: " << std::endl;
     cin >> coords[0] >> coords[1];
  }
  
  int up_case = coords[1] - 2,
	  down_case = coords[1] + 2,
	  right_case = coords[0] + 2,
	  left_case = coords[0] - 2;

  if(bounded(up_case) ) { // up case

  	if(bounded(coords[0] + 1)) {
	 movs_posibles[cur_movs][0] = coords[0] + 1;
	 movs_posibles[cur_movs][1] = coords[1] - 2;
	 cur_movs++;

	}
	if(bounded( coords[0] - 1) ) {
	 movs_posibles[cur_movs][0] = coords[0] - 1;
	 movs_posibles[cur_movs][1] = coords[1] - 2;
	 cur_movs++;
	}
	
  }

   if ( bounded(down_case) ){ // down case
  
	if(bounded( coords[0] + 1) ) {
	 movs_posibles[cur_movs][0] = coords[0] + 1;
	 movs_posibles[cur_movs][1] = coords[1] + 2;
	 cur_movs++;

	}
	if(bounded( coords[0] - 1)) {
	 movs_posibles[cur_movs][0] = coords[0] - 1;
	 movs_posibles[cur_movs][1] = coords[1] + 2;
	 cur_movs++;
	}
	
  }
 
   if ( bounded(right_case) ) { // right case

	if(bounded( coords[1] - 1 )) {
	 movs_posibles[cur_movs][0] = coords[0] + 2;
	 movs_posibles[cur_movs][1] = coords[1] - 1;
	 cur_movs++;
	}
	if(bounded( coords[1] + 1 ) ) {
	 movs_posibles[cur_movs][0] = coords[0] + 2;
	 movs_posibles[cur_movs][1] = coords[1] + 1;
	 cur_movs++;
	}
	
  }

  if ( bounded(left_case) ) { // left case

	if(bounded( coords[1] - 1 )) {
	 movs_posibles[cur_movs][0] = coords[0] + 1;
	 movs_posibles[cur_movs][1] = coords[1] - 1;
	 cur_movs++;
	}
	if(bounded(coords[1]  + 1)) {
	 movs_posibles[cur_movs][0] = coords[0] - 1;
	 movs_posibles[cur_movs][1] = coords[1] + 1;
	 cur_movs++;
	}

  }

  cout << "El caballo puede saltar de " << coords[0] << " " << coords[1] << "a: " << std::endl;
  for(int j = 0, split = 0; j < 8; j++) {
  	for(int i = 0; i < 2; i++) {
 if(movs_posibles[j][i] == -1) {
		 break;
		 split = 0;
		}
  		 if(i == 1) {
		   cout << movs_posibles[j][i - 1] << " " << movs_posibles[j][i];
		   split = 1;
		 }
	  }
	  
	  if(split == 1) cout << std::endl;
  }
  
}

int main() {
 get_mov();
 return 0;
}
