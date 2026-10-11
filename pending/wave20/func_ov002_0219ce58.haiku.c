#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_0206aa58(void *p, int v, uint32_t n);
extern char data_ov002_021d4cc8[];

typedef struct {
    void *vtbl;
    uint8_t pad[0x34];
    uint32_t a;
    uint32_t b;
} Obj;

void *func_ov002_0219ce58(uint32_t a, uint32_t b, uint32_t c)
{
    Obj *p = (Obj *)func_0205681c(0x40);
    if (p != 0) {
        func_0206aa58(p, 0, c);
        p->vtbl = data_ov002_021d4cc8;
        p->a = a;
        p->b = b;
    }
    return p;
}
