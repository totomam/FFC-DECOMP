#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } P;
typedef struct {
    uint32_t w0, w1, w2, f0c, f10, f14, f18, f1c;
    P f20;
} FFCObj;

extern void func_ov002_0219cbac(uint32_t a, uint32_t b);
extern void func_ov002_0219c9d8(uint32_t a, uint32_t b, uint32_t c, P d);

void func_ov002_0219f614(FFCObj *p) {
    if (p->f1c == 0) {
        func_ov002_0219cbac(p->f14, p->f18);
    } else {
        func_ov002_0219c9d8(p->f14, p->f18, p->f1c, p->f20);
    }
    p->f0c = (p->f0c & ~0xffu) | 2;
}
