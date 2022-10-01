#include <stdlib.h>

int find_outlier(const int *values, size_t count) {
  if((abs(values[0]%2) + abs(values[1]%2) + abs(values[2]%2)) <= 1) { // check even
    int i = 0;
    while(values[i]%2 == 0) {
      i++;
    }
    return values[i];
  } else { // check odd
    int i = 0;
    while(abs(values[i]%2) == 1) {
      i++;
    }
    return values[i];
  }
}
