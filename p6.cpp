#include <iostream>

using std::cout;
using std::cin;

std::string repeat_ch(std::string a, int times) {

std::string formed = "";
	
	for(int j = 0; j < times; j++) {
		formed += a;
	}
	return formed;
}

void get_values() {
 int valores = -1, positives = 0, negatives = 0;
 cout << "Ingrese varios valores, termine con cero\n";

 while(valores != 0) {
  cin >> valores;
  if(valores > 0) positives++;
  if(valores < 0) negatives++;
 }
 cout << "Positivos: " << repeat_ch("*", positives) << std::endl;
 cout << "Negativos: " << repeat_ch("*", negatives);
}

int main() {
 get_values();
 return 0;
}
