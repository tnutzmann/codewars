#include <math.h>

long long findNb(long long m)
{
  unsigned long v = 0;
  int n = 1;
  for(; v < m; n++) {
    v = v + pow(n,3);
  }
  if(v != m ) {
    return -1;
  } 
  return n-1;
}
