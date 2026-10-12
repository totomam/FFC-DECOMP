#include "ffc/types.h"

typedef struct Ctl {
    void **vt;
    uint32_t pad[2];
    uint32_t flag;
} Ctl;

extern void func_02042b18(void *a, int b);
extern void func_02037544(void);
extern Ctl *func_0205681c(int a);
extern Ctl *func_ov007_0219ee04(Ctl *a, void *b);

void func_02044114(uint8_t *p)
{
    Ctl *c;

    func_02042b18(*(void **)(p + 0x80), 0);
    func_02037544();
    c = func_0205681c(0x84);
    if (c != 0) {
        c = func_ov007_0219ee04(c, p + 0x88);
    }
    *(Ctl **)(p + 0x8c) = c;
    if (((int32_t)(c->flag << 24) >> 24) == 0) {
        ((void (*)(Ctl *))c->vt[2])(c);
    }
    c = *(Ctl **)(p + 0x8c);
    if (((int32_t)(c->flag << 24) >> 24) == 0) {
        ((void (*)(Ctl *))c->vt[2])(c);
    }
}
