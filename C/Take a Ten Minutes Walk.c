#include <stdbool.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) {
  int pos_x = 0;
  int pos_y = 0;
  int i = 0;
  while(walk[i] != '\0') {
    if(i > 10) {
      return false;
    }
    switch(walk[i]) {
        case 'n':
          pos_y++;
          break;
        case 's':
          pos_y--;
          break;
        case 'w':
          pos_x--;
          break;
        case 'e':
          pos_x++;
          break;
    }
    i++;
  }
  if(i == 10 && pos_x == 0 && pos_y == 0 ) {
      return true;
    } else {
      return false;
    }
}
