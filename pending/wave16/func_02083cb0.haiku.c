#include "ffc/types.h"

void func_02083cb0(uint32_t *ctx) {
    ctx[0x58 / 4] = 0;
    ctx[0x5c / 4] = 0;
    ctx[0x54 / 4] = 0;
    ctx[0] = 0x67452301;
    ctx[1] = 0xefcdab89;
    ctx[2] = 0x98badcfe;
    ctx[3] = 0x10325476;
    ctx[4] = 0xc3d2e1f0;
}
