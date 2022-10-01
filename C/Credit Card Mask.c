#include <stdbool.h>

char *maskify (char *masked, const char *string)
{
  strcpy(masked, string); // copy the string to masked
  int i = 0;
  bool atLastFour = false;
  
  while(masked[i] != '\0') { // loop through the string
    
    for(int j = 0; j <= 4; j++) { // check position
      if(masked[i+j] == '\0') {
        atLastFour = true;
      }
    }
    
    if(!atLastFour) {
      masked[i] = '#';
    }
    i++;
  }
	return masked;
}
