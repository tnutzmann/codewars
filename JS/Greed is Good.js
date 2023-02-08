function score( dice ) {
  let score = 0;
  let counts = {}
  dice.forEach(function(x) { counts[x] = (counts[x] || 0) + 1; });
  if(counts[1] >= 3) {
    score += 1000;
    counts[1] -= 3;
  }
  else if(counts[2] >= 3) {
    score += 200;
    counts[2] -= 3;
  }
  else if(counts[3] >= 3) {
    score += 300;
    counts[3] -= 3;
  }
  else if(counts[4] >= 3) {
    score += 400;
    counts[4] -= 3;
  }
  else if(counts[5] >= 3) {
    score += 500;
    counts[5] -= 3;
  }
  else if(counts[6] >= 3) {
    score += 600;
    counts[6] -= 3;
  }
  if(counts[1] >= 1) {
    score += counts[1]*100;
  }
  if(counts[5] >= 1) {
    score += counts[5]*50;
  }
  
  return score
}
