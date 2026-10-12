#include "ffc/types.h"

extern void func_020692a4(void *object);
extern void func_020696f8(void *self);
extern void func_020697ac(void *self, int arg);

typedef void (*VFn)(void *self, int a, int b);

void func_ov004_0214ced4(uint8_t *p)
{
    void **q;
    void **e;
    void *obj;
    void *obj2;

    q = *(void ***)(p + 0xc4);
    e = q + *(uint32_t *)(p + 0xc8);
    if (q != e) {
        do {
            func_020692a4(*q);
            q++;
        } while (q != *(void ***)(p + 0xc4) + *(uint32_t *)(p + 0xc8));
    }

    q = *(void ***)(p + 0xd0);
    e = q + *(uint32_t *)(p + 0xd4);
    if (q != e) {
        do {
            func_020692a4(*q);
            q++;
        } while (q != *(void ***)(p + 0xd0) + *(uint32_t *)(p + 0xd4));
    }

    func_020696f8(p);
    func_020697ac(p, 0);
    func_020692a4(*(void **)(p + 0xc0));

    obj = *(void **)(p + 0xc0);
    obj2 = *(void **)((uint8_t *)obj + 0x9c);
    {
        void **vt = *(void ***)obj2;
        ((VFn)vt[14])(obj2, 6, 0);
    }
}
