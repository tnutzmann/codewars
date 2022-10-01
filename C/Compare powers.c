#include <math.h>

int compare_powers(const int n1[2], const int n2[2]) {
  float left = log(n1[0]) * n1[1];
  float right = log(n2[0]) * n2[1];
  
  if(left > right) {
    return -1;
  }
  if(left < right) {
    return 1;
  }
  return 0;
}
