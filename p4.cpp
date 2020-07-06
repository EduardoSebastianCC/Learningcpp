#include <iostream>


using std::cout;
using std::cin;

unsigned factorial(unsigned n) {
 unsigned p = 1;
 for(unsigned j = 1; j <= n; j++) {
 	p *= j;
 }
 return p;
}

unsigned potenciaf_creciente(unsigned n, unsigned m) {
  int nf = factorial(n + m - 1);
  int mf = factorial(n -1);
  
  return nf/mf;
}

unsigned coef_binomial(unsigned n, unsigned k) {
 int nf = factorial(n),
	  kf = factorial(k),
	  n_k_f = factorial(n - k);
	  
	  return nf/(kf * n_k_f);
}

int pow(int base ,int exp) {
	int product = 1;
	for(int j = 1; j <= exp; j++) {
		product *= base;
	}
 return product;
}


float Stirling_number(unsigned n, unsigned k) {
 int kf = factorial(k), sum = 0;
 
 float div = 1.0/kf;
 

 for(int i = 0; i <= k; i++) {
	sum += (i%2 == 0) ? ( coef_binomial(k, i) * pow(k-i, n) ) : ( -1 * coef_binomial(k, i) * pow(k-i, n) );
 }

 return div * sum;
}

void Stirling_triangle() {
	
	for(int j = 1; j <= 6; j++) {
		for(int i = 1; i <=j; i++) {
			cout << Stirling_number(j, i) <<  " ";
		}
		cout << std::endl;
	}
}

int main() {
 cout << factorial(5) << std::endl;
 cout << potenciaf_creciente(6, 4) << std::endl;
 cout << coef_binomial(7, 2) << std::endl;
 Stirling_triangle();
 return 0;
}
