#include "ffc/types.h"
extern uint32_t func_020817c8(int32_t first, int32_t second);
typedef struct { int32_t a, b; } S;
void func_ov003_0215043c(uint8_t *o, S s, uint16_t h, int32_t c) {
    volatile int32_t L[17];
    int32_t px, py, qx, qy;
    int32_t d;
    uint8_t *p;
    *(S*)(o + 0x4c8) = s;
    *(uint16_t*)(o + 0x4d0) = h;
    *(int32_t*)(o + 0x4d4) = c;
    d = *(int32_t*)(o + 0x49c);
    py = func_020817c8(s.b, d);
    px = func_020817c8(s.a, d);
    qx = (px >> 12) - 0x80;
    qy = (py >> 12) - 0x60;
    p = *(uint8_t**)(o + 0x8c);
    L[13] = px; L[4] = px; L[14] = py;
    *(int32_t*)(p + 0x34) = qx;
    L[5] = py; L[15] = qx; L[16] = qy; L[0] = qx; L[1] = qy;
    *(int32_t*)(p + 0x38) = qy;
}
