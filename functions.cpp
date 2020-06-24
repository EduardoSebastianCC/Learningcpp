#include <iostream>
using namespace std;

using namespace std;

bool is_amicable(unsigned n1, unsigned n2){ // Given two natural numbers n1,n2 check if they are amicable to each other
	unsigned s1 = 1, s2 = 1, max = (n1>=n2) ? n1 : n2; // Max var will help to iterate over half of the max number
    for(int j = 1; j <= max/2; j++, s1 += n1%j == 0 ? j : 0, s2 += n2%j == 0 ? j : 0) {} // Get divisors of n1 and n2, divding from 2 to max(n1, n2)/2 for optimization
    return (s1 == n2 && s2 == n1); // Return true according to the definition of amicable numbers.
}

bool is_prime(unsigned n) {
 for(unsigned k = 2; k <= n/2; k++) {
  if(!(n%k) || n == 1) return false; // Return false if is divisible by a number between [2, n/2]
 }
 return n > 1 ? true : false; // Delete 0 and 1 as prime numbers.
}

float max(float a, float b) {return a >= b ? a : b;}

float min(float a, float b) {return a <= b ? a : b;}

float median(float a, float b, float c) {return (a + b + c) - ( max(max(a,b), c) + min(min(a,b), c) );}

bool is_integer(float a) {
 int trunc = a;
 return !(a - trunc);
}

unsigned factorial(unsigned n, int j = 1) {
 j++;
 if(j < n) return j * factorial(n, j);
 return n > 0 ? n : 1;
}


unsigned redondear(unsigned n) {
	
	unsigned flag = 0;
	
	while((n%10)) {
	 n--;
	 flag++;
	}
	return (flag < 5) ? n : (n+10);
}

unsigned truncar(unsigned n) {
	while((n%10)) {
	 n--;
	}
  return n;
}



