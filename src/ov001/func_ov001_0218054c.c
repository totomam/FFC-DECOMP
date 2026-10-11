#include "ffc/types.h"

extern void func_ov000_02168b00(uint32_t a, void *b);
extern void func_ov000_02168784(uint32_t a, void *b);

typedef struct Sub {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t v12;
    uint32_t v16;
} Sub;

typedef struct Obj {
    uint32_t w0;
    uint32_t w1;
    Sub *sub;
    uint32_t state;
} Obj;

void func_ov001_0218054c(Obj *p, int a, int b, int c)
{
    if (p->state != 7) {
        p->state = 7;
        func_ov000_02168b00(p->sub->v12, &p);
        func_ov000_02168784(p->sub->v16, &p);
    }
}
