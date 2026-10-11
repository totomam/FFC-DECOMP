#include "ffc/types.h"

typedef struct {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
} FFCObj;

extern void func_ov002_0219cbac(uint32_t a, uint32_t b);
extern void func_ov002_0219c9d8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void func_ov002_0219f614(FFCObj *p) {
    if (p->f1c == 0) {
        func_ov002_0219cbac(p->f14, p->f18);
    } else {
        uint64_t v;
        uint64_t *q = &v;
        *q = ((uint64_t)p->f24 << 32) | p->f20;
        func_ov002_0219c9d8(p->f14, p->f18, p->f1c, (uint32_t)*q, (uint32_t)(*q >> 32));
    }
    p->f0c = (p->f0c & ~0xffu) | 2;
}
