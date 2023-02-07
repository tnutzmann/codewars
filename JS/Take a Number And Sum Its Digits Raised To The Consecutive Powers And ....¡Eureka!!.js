function sumDigPow(a, b) {
  let values = [];
  for(;a <= b; a++) {
    let n = a.toString();
    let m = 0;
    for(let i = 0; i < n.length; i++) {
      m += Math.pow(Number(n.charAt(i)), i+1);
    }
    if(m == a) {
      values.push(m)
    }
  }
  return(values)
}
