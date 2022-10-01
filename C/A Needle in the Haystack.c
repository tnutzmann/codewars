#include <stdlib.h>

char *find_needle(const char *const haystack[/* count */], size_t count)
{
  char str[100];
  size_t index;
  for (index = 0; index < count; index++) {
        if(strcmp(haystack[index], "needle") == 0) {
          sprintf(str, "found the needle at position %d", index);
          return str;
        }
    }
    return "not found";
}
