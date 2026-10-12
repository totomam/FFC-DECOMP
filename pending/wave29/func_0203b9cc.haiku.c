#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S2;
struct B { char pad[0x14]; void *f14; };
struct A { char pad[0x18]; struct B *f18; };

extern void *func_0205681c(uint32_t size);
extern void func_0206660c(void *obj, struct A *g, void *h, S2 s, uint32_t c, uint32_t d);
extern struct A *data_0213df20;
extern char data_020aeacc[];

void *func_0203b9cc(S2 s, uint32_t c, uint32_t d)
{
    void *obj = func_0205681c(0x50);
    if (obj != 0) {
        func_0206660c(obj, data_0213df20, data_0213df20->f18->f14, s, c, d);
        *(char **)obj = data_020aeacc;
    }
    return obj;
}
