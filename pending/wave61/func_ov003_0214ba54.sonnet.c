#include "ffc/types.h"
typedef struct { uint32_t v; } W;
extern void *func_0205681c(int n);
extern void func_02056c9c(void *p, int v);
extern char data_ov003_0217968c[];
void *func_ov003_0214ba54(uint32_t a, W b, W c, uint32_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h) {
    uint8_t *p = (uint8_t *)func_0205681c(0x98);
    if (p != 0) {
        func_02056c9c(p, 0);
        *(void **)p = data_ov003_0217968c;
        *(uint32_t *)(p + 0x84) = a;
        *(uint32_t *)(p + 0x88) = b.v;
        *(uint32_t *)(p + 0x8c) = c.v;
        *(uint32_t *)(p + 0x90) = d;
        p[0x94] = e;
        p[0x95] = f;
        p[0x96] = g;
        p[0x97] = h;
    }
    return p;
}
