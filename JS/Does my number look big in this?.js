function narcissistic(value) {
  let value_str = value.toString();
  for(let i = 0; i < value_str.length; i++) {
    value -= Math.pow(Number(value_str.charAt(i)), value_str.length);   
  }
  return value == 0
}
