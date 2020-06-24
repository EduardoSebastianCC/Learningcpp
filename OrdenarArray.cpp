

void ordenar_array(int array[], int size) {
	
   for(int j = 0, menor = 0, aux = 0, aux_index = 0; j < size; j++) {

	 menor = array[j];
	 
   	 for(int i = j; i < size; i++) {
   	 	
	  if(array[i] < menor) {
	  	menor = array[i];
	  	aux_index = i;
	  }
	  
	 }
	 
	 aux = array[j];
	 array[j] = menor;
	 array[aux_index] = aux;
	   
   }
   
}

