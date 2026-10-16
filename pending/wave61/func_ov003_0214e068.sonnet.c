#include "ffc/types.h"
extern uint32_t func_ov003_021464f4(uint32_t a, uint32_t b);
extern uint8_t *func_ov003_02155b40(uint32_t a);
extern uint32_t func_020817c8(int32_t first, int32_t second);
extern int16_t data_020a1bd0[];
typedef struct { int32_t pad[19]; volatile int32_t c; int32_t d; volatile int32_t e; int32_t f; } L;
void func_ov003_0214e068(int32_t *out, uint8_t *p) {
    L l;
    uint32_t h = func_ov003_021464f4(*(uint32_t*)(p+0x14), *(uint16_t*)(p+0x18));
    uint8_t *q = func_ov003_02155b40(h);
    int32_t s = *(uint32_t*)(p+0x2c);
    int idx;
    *(uint16_t*)(p+0x2a) = *(uint16_t*)(p+0x28) + *(uint16_t*)(q+0x10);
    idx = *(uint16_t*)(p+0x2a) >> 4;
    {
    int i2 = idx*2;
    l.d = data_020a1bd0[i2];
    l.c = data_020a1bd0[i2+1];
    }
    {
    int32_t r = func_020817c8(l.d, s);
    l.e = func_020817c8(l.c, s);
    l.f = r;
    {
    int32_t *pos = (int32_t*)(func_ov003_02155b40(h) + 8);
    out[1] = pos[1] + r;
    out[0] = pos[-0+0] + l.e;
    }
    }
}
