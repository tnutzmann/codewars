function perimeter(n) {
  let sum = 1;
  let j = 0;
  let k = 1;
  
  for(let i = 0; i < n; i++) {
    let z = j+k;
    sum += z;
    j = k;
    k = z;
  }
  return 4*sum
}
