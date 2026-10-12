#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0203b720(void);
extern int func_020692e8(void *a);
extern void func_020692f0(void *a);
extern void *func_020655dc(void *a, int b, int c);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b64ec(uint8_t *p)
{
    void *r4 = func_0203b6fc();
    void *o;

    if (func_020692e8(*(void **)(p + 0xbc))) {
        if (p[0x12c]) {
            o = *(void **)(*(uint8_t **)(p + 0xbc) + 0x98);
            func_02056bc0(r4, func_020655dc(o, 6, 2));
        } else {
            o = *(void **)(*(uint8_t **)(p + 0xbc) + 0x98);
            func_02056bc0(r4, func_020655dc(o, 5, 2));
        }
    } else {
        if (p[0x12c]) {
            o = *(void **)(*(uint8_t **)(p + 0xbc) + 0x98);
            func_02056bc0(r4, func_020655dc(o, 4, 2));
        } else {
            func_020692f0(*(void **)(p + 0xbc));
        }
    }

    {
        void *t = func_0203b720();
        uint8_t *q = p + 0x14;
        func_02056bc0(q, t);
        func_02056bc0(q, r4);
    }
}
