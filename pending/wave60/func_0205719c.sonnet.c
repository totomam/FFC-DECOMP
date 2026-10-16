/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern char data_020b0c34[];
typedef struct { uint32_t a, b; } Pr;
void func_0205719c(uint32_t *p, Pr pr) {
    uint8_t *q = (uint8_t *)p;
    int z = 0;
    p[3] &= ~0xff;
    p[7] = z - 1;
    p[9] = z - 1;
    p[0] = (uint32_t)data_020b0c34;
    p[14] = pr.a;
    q[0x15] = z;
    q[0x13] = z;
    q[0x14] = z;
    p[11] = 1;
    p[12] = z;
    p[15] = pr.b;
    q[0x15] = 1;
}
