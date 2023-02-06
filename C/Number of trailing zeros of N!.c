#include <math.h>

long zeros(long n) {
  int trailingZeros = 0;
  if (n <= 4) {
    return trailingZeros;
  }
  int intLog = (int)(log(n)/log(5));
  
  for(int i = 1; i <= intLog; i++) {
    trailingZeros += (int)(n/pow(5,i));
  }
  
  return trailingZeros;
}
