#include <string.h>
#include <stdio.h>

int last_digit(const char *a, const char *b)
{
  char x,y = '0';
  int bLast2;
  x = b[strlen(b)-1];
  if(((int)strlen(b) - 2) >= 0) {
    y = b[strlen(b)-2];
  }
  bLast2 = (x-'0') + 10*(y-'0');
  if(bLast2 == 0 && b[0] == '0') {
    return 1;
  }
  
  if(a[strlen(a)-1] == '0') {
    return 0;
  }
  if(a[strlen(a)-1] == '1') {
    return 1;
  }
  if(a[strlen(a)-1] == '2') {
    switch(bLast2%4) {
        case 0: return 6;
        case 1: return 2;
        case 2: return 4;
        case 3: return 8;
    }
    
  }
  if(a[strlen(a)-1] == '3') {
    switch(bLast2%4) {
        case 0: return 1;
        case 1: return 3;
        case 2: return 9;
        case 3: return 7;
    }
  }
  if(a[strlen(a)-1] == '4') {
    switch(bLast2%2) {
        case 0: return 6;
        case 1: return 4;
    }
  }
  if(a[strlen(a)-1] == '5') {
    return 5;
  }
  if(a[strlen(a)-1] == '6') {
    return 6;
  }
  if(a[strlen(a)-1] == '7') {
    switch(bLast2%4) {
        case 0: return 1;
        case 1: return 7;
        case 2: return 9;
        case 3: return 3;
    }
  }
  if(a[strlen(a)-1] == '8') {
    switch(bLast2%4) {
        case 0: return 6;
        case 1: return 8;
        case 2: return 4;
        case 3: return 2;
    }
  }
  if(a[strlen(a)-1] == '9') {
    switch(bLast2%2) {
        case 0: return 1;
        case 1: return 9;
    }
  }
    
  return 0;
}
