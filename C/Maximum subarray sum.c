#include <stddef.h>

int maxSequence(const int* array, size_t n) {
  int maxSum = 0;
  for(size_t i = 0; i < n; i++) {
    int sum = 0;
    for(size_t j = i; j < n; j++) {
      sum = sum + array[j];
      if(sum > maxSum) {
        maxSum = sum;
      }
    }
  }
  return maxSum;
}
