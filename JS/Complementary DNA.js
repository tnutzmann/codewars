function DNAStrand(dna){
  let dna_comp = "";
  for(let i = 0; i < dna.length; i++) {
    switch(dna.charAt(i)) {
        case 'A':
          dna_comp += 'T'
          break;
        case 'C':
          dna_comp += 'G'
          break;
        case 'G':
          dna_comp += 'C'
          break;
        case 'T':
          dna_comp += 'A'
          break;
    }
  }
  return dna_comp
}
