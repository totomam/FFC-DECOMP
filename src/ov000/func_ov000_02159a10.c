#include "ffc/types.h"

extern uint64_t func_020882cc(void);

typedef struct Inner {
    uint32_t a;
    uint32_t b;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
} Inner;

typedef struct Outer {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    Inner *p;
} Outer;

extern Outer data_ov000_0217004c;

void func_ov000_02159a10(void)
{
    Inner *p = data_ov000_0217004c.p;
    if (p != 0) {
        p->f8 = 0;
        uint64_t r = func_020882cc();
        Inner *q = data_ov000_0217004c.p;
        q->fc = (uint32_t)r;
        q->f10 = (uint32_t)(r >> 32);
    }
}
