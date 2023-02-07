function XO(str) {
  let x_counter = 0;
  let o_counter = 0;
  
  str = str.toUpperCase();
  for(let i = 0; i < str.length; i++) {
    if(str.charAt(i) == 'X') {
      x_counter++;
    }
    else if (str.charAt(i) == 'O') {
      o_counter++;
    }
  }
  if(x_counter == o_counter) {
      return true;
    }
    
    return false;
}
