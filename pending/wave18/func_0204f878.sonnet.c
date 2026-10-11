#include "ffc/types.h"
extern uint8_t data_0209efe8[];
typedef union { uint32_t w; struct { uint32_t a : 3; uint32_t b : 2; uint32_t r : 27; } f; } W;
typedef struct { uint8_t pad[0x34]; uint32_t v[1]; } S;
uint32_t func_0204f878(S *s, int i) {
    W u;
    uint32_t *t;
    uint32_t *p = s->v;
    u.w = *(uint32_t *)((int)p + i * 4);
    t = (uint32_t *)(data_0209efe8 + i * 0x50 + u.f.a * 0x10);
    return t[u.f.b];
}
