#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
} Blk;

extern Blk *func_ov003_02155b40(uint32_t *p);
extern uint32_t func_ov003_0214dd30(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov003_0215b0e8(uint32_t *p, uint32_t i);
extern void func_ov003_0214db7c(uint32_t a, uint32_t b, uint32_t *c);

void func_ov003_0215b0f8(uint32_t *p, uint32_t *a, uint32_t *b, uint32_t *c)
{
    uint32_t *ptr[3];
    uint32_t out[3];
    uint32_t tmp[3];
    uint32_t i;
    uint32_t v;
    Blk *s1;

    s1 = func_ov003_02155b40(p);
    v = func_ov003_0214dd30(p[0x42], s1->w8, func_ov003_02155b40(p)->wc);

    ptr[0] = a;
    ptr[1] = b;
    ptr[2] = c;

    for (i = 0; i < 3; i++) {
        out[i] = 0;
        tmp[i] = func_ov003_0215b0e8(p, i);
        if (tmp[i] == 0xFFFFFFFF) {
            out[i] = (uint32_t)ptr[i];
        } else if (ptr[i] != 0) {
            *ptr[i] = tmp[i];
        }
    }
    func_ov003_0214db7c(p[0x42], v, out);
}
