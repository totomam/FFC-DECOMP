#include "ffc/types.h"

extern void func_ov007_021a04b4(void);
extern void *func_02056aec(void *p);
extern void *func_0203b708(uint32_t x);
extern void func_02056bc0(void *object, void *node);

typedef struct Leaf {
    uint32_t w;
} Leaf;

typedef struct Inner {
    uint8_t pad[0x14];
    Leaf d;
} Inner;

typedef struct Outer {
    uint8_t pad[0xc];
    Inner in;
} Outer;

void func_ov007_021a04dc(uint8_t *p)
{
    uint32_t *obj;
    uint32_t v;
    void *n;
    void *x;
    Inner *q;

    func_ov007_021a04b4();
    obj = *(uint32_t **)(p + 0x148);
    v = obj[3];
    v &= ~0xffu;
    v |= 2;
    obj[3] = v;
    n = func_02056aec(p + 0xc);
    x = func_0203b708(0x1e);
    q = &((Outer *)p)->in;
    q = (Inner *)&q->d;
    func_02056bc0(q, x);
    func_02056bc0(q, n);
}
