#include <string.h>
#include <stdio.h>

long word2long(char* word) {
  if(strcmp(word, "one") == 0) {
    return 1;
  }
  if(strcmp(word, "two") == 0) {
    return 2;
  }
  if(strcmp(word, "three") == 0) {
    return 3;
  }
  if(strcmp(word, "four") == 0) {
    return 4;
  }
  if(strcmp(word, "five") == 0) {
    return 5;
  }
  if(strcmp(word, "six") == 0) {
    return 6;
  }
  if(strcmp(word, "seven") == 0) {
    return 7;
  }
  if(strcmp(word, "eight") == 0) {
    return 8;
  }
  if(strcmp(word, "nine") == 0) {
    return 9;
  }
  if(strcmp(word, "ten") == 0) {
    return 10;
  }
  if(strcmp(word, "eleven") == 0) {
    return 11;
  }
  if(strcmp(word, "twelve") == 0) {
    return 12;
  }
  if(strcmp(word, "thirteen") == 0) {
    return 13;
  }
  if(strcmp(word, "fourteen") == 0) {
    return 14;
  }
  if(strcmp(word, "fifteen") == 0) {
    return 15;
  }
  if(strcmp(word, "sixteen") == 0) {
    return 16;
  }
  if(strcmp(word, "seventeen") == 0) {
    return 17;
  }
  if(strcmp(word, "eighteen") == 0) {
    return 18;
  }
  if(strcmp(word, "nineteen") == 0) {
    return 19;
  }
  if(strcmp(word, "twenty") == 0) {
    return 20;
  }
  if(strcmp(word, "thirty") == 0) {
    return 30;
  }
  if(strcmp(word, "forty") == 0) {
    return 40;
  }
  if(strcmp(word, "fifty") == 0) {
    return 50;
  }
  if(strcmp(word, "sixty") == 0) {
    return 60;
  }
  if(strcmp(word, "seventy") == 0) {
    return 70;
  }
  if(strcmp(word, "eighty") == 0) {
    return 80;
  }
  if(strcmp(word, "ninety") == 0) {
    return 90;
  }
  if(strcmp(word, "hundred") == 0) {
    return 100;
  }
  if(strcmp(word, "thousand") == 0) {
    return 1000;
  }
  if(strcmp(word, "million") == 0) {
    return 1000000;
  }
  return 0;
}

long parse_int (const char* number) {
  char buffer[64];
  int bufferCounter = 0;
  long bank = 0;
  long num = 0;
  
  for(unsigned long i = 0; i < strlen(number)+1; i++) {
    if(number[i] == ' ' || number[i] == '-' || i == strlen(number)) {
      bufferCounter = 0;
      //printf("%lu:%s\n",strlen(buffer) , buffer);
      if(word2long(buffer) == 1000000 && num != 0) {
        bank += num * 1000000;
        num = 0;
      } else if(word2long(buffer) == 1000 && num != 0) {
        bank += num * 1000;
        num = 0;
      } else if(word2long(buffer) == 100 && num != 0) {
        num = num*100 + bank;
        bank = 0;
      } else {
        num += word2long(buffer);
      }
    } else {
      buffer[bufferCounter] = number[i];
      buffer[bufferCounter + 1] = '\0';
      bufferCounter++;
    }
  }
  return num + bank;
}
