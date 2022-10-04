#include <stdbool.h>

bool is_prime(int num)
{
  if(num <= 1) {
   return false; 
  }
  int j = num;
  for(int i = 2; i < j; i++) {
    if(num % i == 0) {
      return false;
    }
    j = num/i;
  }
  return true;
}
