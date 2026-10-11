#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;
extern S data_ov003_0217bd48;

void func_ov003_02177a48(uint8_t *p) {
    uint8_t *q;
    S v;
    q = p + 0x48;
    q[0x12] = (q[0x12] & ~0xff) | 1;
    q = p + 0x14;
    q[0x12] = (q[0x12] & ~0xff) | 1;
    v = data_ov003_0217bd48;
    *(S *)(p + 0x80) = v;
}
