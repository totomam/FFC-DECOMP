#include "ffc/types.h"

extern void func_02069694(void *p, void *a, int b);
extern void func_02069600(void *p, void *a);

typedef struct Obj {
    void **vt;
} Obj;

void func_ov008_021a6bcc(uint8_t *p)
{
    uint8_t i;
    uint32_t a;

    func_02069694(p, *(void **)(p + 0xbc), 2);
    for (i = 0; i < *(uint32_t *)(p + 0xc8); i++) {
        Obj *o;
        func_02069600(p, (*(void ***)(p + 0xc4))[i]);
        o = (Obj *)(*(void ***)(p + 0xc4))[i];
        if (o != 0) {
            if (o != 0) {
                ((void (*)(Obj *))o->vt[1])(o);
            }
            (*(uint32_t **)(p + 0xc4))[i] = 0;
        }
    }
    a = *(volatile uint32_t *)(p + 0xc8);
    *(uint32_t *)(p + 0xc8) = *(volatile uint32_t *)(p + 0xc8) - a;
}
