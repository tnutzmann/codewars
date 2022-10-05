unsigned convert(char c) {
  if(c == 'I') {
    return 1;
  }
  if(c == 'V') {
    return 5;
  }
  if(c == 'X') {
    return 10;
  }
  if(c == 'L') {
    return 50;
  }
  if(c == 'C') {
    return 100;
  }
  if(c == 'D') {
    return 500;
  }
  if(c == 'M') {
    return 1000;
  }
  return -1;
}

unsigned decode_roman (const char *roman_number)
{
	unsigned num = 0;
  
  for(int i = 0; roman_number[i] != '\0'; i++) {
    if(convert(roman_number[i]) < convert(roman_number[i+1]) && roman_number[i+1] != '\0') {
      num = num + convert(roman_number[i+1]) - convert(roman_number[i]);
      i++;
    } else {
      num = num + convert(roman_number[i]);
    }
  }
  return num;
}
