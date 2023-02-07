function validParentheses(parens) {
  let counter = 0;
  for(let i = 0; i < parens.length; i++) {
    if(parens.charAt(i) == '(') {
        counter++;
    }
    if(parens.charAt(i) == ')') {
        counter--;
    }
    if (counter < 0) {
      return false;
    }
  }
  if(counter != 0) {
    return false;
  }
  return true;
}
