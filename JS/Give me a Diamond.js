function diamond(n){
  if(n%2 == 0 || n <= 0) {
    return null;
  }
  
  let diamond = '*'.repeat(n) + '\n';
  let a = n
  a-=2;
  while(a > 0) {
    diamond = ' '.repeat(Math.ceil((n-a)/2)) + '*'.repeat(a) + '\n' + diamond + ' '.repeat(Math.ceil((n-a)/2)) + '*'.repeat(a) + '\n';
    a-=2
  }
  return diamond;
}
