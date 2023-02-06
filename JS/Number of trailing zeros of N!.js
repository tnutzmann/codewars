function zeros (n) {
  let zeros = 0
  if (n <= 4) {
    return zeros;
  }
  let limit = Math.floor(Math.log(n)/Math.log(5))
  
  for(let i = 1; i <= limit; i++) {
    zeros += Math.floor(n / Math.pow(5,i))
  }
  return zeros;
}
