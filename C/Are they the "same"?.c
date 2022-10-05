#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

int comp_ints (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

bool comp(const int *a, const int *b, size_t n)
{
  qsort (a, n, sizeof (int), comp_ints);
  qsort (b, n, sizeof (int), comp_ints);

  for(size_t i = 0; i<n; i++) {
    if(a[i]*a[i] != b[i]) {
      return false;
    }
  }
  return true;
}
