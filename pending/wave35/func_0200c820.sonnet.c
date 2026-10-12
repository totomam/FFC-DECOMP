#include "ffc/types.h"

extern void func_0206854c(void *out, void *obj);
extern void func_02068b70(void *obj, uint32_t n);
extern void *func_02056aa4(void *obj);
extern void *func_0203b708(void *x);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    void *val;
} Buf;

void func_0200c820(uint8_t *p, void *q)
{
    Buf buf;
    void *v;
    void *n;
    void *r4;

    func_0206854c(&buf.val, *(void **)(p + 0x94));
    if (buf.val == 0) {
        return;
    }
    func_02068b70(*(void **)(p + 0x94), 0xc);
    v = func_02056aa4(*(void **)(p + 0x94));
    n = func_0203b708(q);
    r4 = *(void **)(p + 0x98);
    func_02056bc0(r4, n);
    func_02056bc0(r4, v);
}
