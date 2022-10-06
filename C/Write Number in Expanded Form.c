#include <string.h>

char *expandedForm(char *string, unsigned long long n)
{
	// write to string and return it
	// it has enough room for a trailing "+ "
	*string = '\0';
  
  char num[32];
  sprintf(num,"%llu",n);
  
  for(size_t i = 0; i < strlen(num); i++) {
    if(num[i] != '0') {
      sprintf(string, "%s%c", string, num[i]);
      for(size_t j = i+1; j < strlen(num); j++) {
        sprintf(string, "%s%c", string, '0');
      }
    }
    if(num[i+1] != '0' && i+1 < strlen(num)) {
      sprintf(string, "%s%s", string, " + ");
    }
  }
	return string;
}
