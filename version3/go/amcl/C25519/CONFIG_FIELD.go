
package C25519

// Modulus types
const NOT_SPECIAL int = 0
const PSEUDO_MERSENNE int = 1
const MONTGOMERY_FRIENDLY int = 2
const GENERALISED_MERSENNE int = 3

// Modulus details
const MODBITS uint = 255 /* Number of bits in Modulus */
const MOD8 uint = 5  /* Modulus mod 8 */
const MODTYPE int = PSEUDO_MERSENNE //NOT_SPECIAL
const FEXCESS int32=((int32(1)<<25)-1)

// Modulus Masks
const OMASK Chunk = ((Chunk(-1)) << (MODBITS % BASEBITS))
const TBITS uint = MODBITS % BASEBITS // Number of active bits in top word
const TMASK Chunk = (Chunk(1) << TBITS) - 1

