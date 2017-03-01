#include "arch.h"
#include "ecp_MS256W.h"

/* MS256 NUMS Curve - Weierstrass */

/* Pseudo-Mersenne NUMS curves http://eprint.iacr.org/2014/130 */

#if CHUNK==16
const int CURVE_A_MS256W=-3;
const BIG_256 CURVE_Order_MS256W= {0x825,0x1A8D,0xA51,0x1640,0x20A,0xE30,0x899,0xEBD,0x1C82,0x1F21,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FFF,0x1FF};
const BIG_256 CURVE_B_MS256W= {0x1581,0x12};
const BIG_256 CURVE_Gx_MS256W= {0x1};
const BIG_256 CURVE_Gy_MS256W= {0xC77,0x15AB,0x1B0,0x8C6,0x10BF,0x760,0x1625,0x126E,0xC2F,0x1E81,0x175A,0x1DDD,0x16CC,0x164,0x1FF2,0xCDA,0x1E4,0x29E,0x1BC6,0xD2};
#endif

#if CHUNK==32
const int CURVE_A_MS256W=-3;
const BIG_256 CURVE_Order_MS256W= {0x751A825,0x559014A,0x9971808,0x1904EBD4,0x1FFFFE43,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0xFFFFFF};
const BIG_256 CURVE_B_MS256W= {0x25581};
const BIG_256 CURVE_Gx_MS256W= {0x1};
const BIG_256 CURVE_Gy_MS256W= {0x2B56C77,0x1FA31836,0x253B042,0x185F26EB,0xDD6BD02,0x4B66777,0x1B5FF20B,0xA783C8C,0x696F18};
#endif

#if CHUNK==64
const int CURVE_A_MS256W=-3;
const BIG_256 CURVE_Order_MS256W= {0xAB20294751A825,0x8275EA265C6020,0xFFFFFFFFFFE43C,0xFFFFFFFFFFFFFF,0xFFFFFFFF};
const BIG_256 CURVE_B_MS256W= {0x25581};
const BIG_256 CURVE_Gx_MS256W= {0x1};
const BIG_256 CURVE_Gy_MS256W= {0xF46306C2B56C77,0x2F9375894EC10B,0x6CCEEEDD6BD02C,0xC1E466D7FC82C9,0x696F1853};
#endif