function cakes(recipe, available) {
  recipe = new Map(Object.entries(recipe));
  available = new Map(Object.entries(available));
  let counter = Number.MAX_VALUE;
  
  for (let [key, val] of recipe) {
    if(available.get(key) == undefined) {return 0;}
    let prop = Math.floor( Number(available.get(key)) / Number(val) );
    if(counter > prop) {counter = prop;}
    if(counter == 0) {return 0;}
  }
  
  return counter
}
