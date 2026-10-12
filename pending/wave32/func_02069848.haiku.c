#include "ffc/types.h"

extern void *func_0206975c(void);

void func_02069848(void *p, void *q)
{
    void *r = func_0206975c();
    void **vt;

    if (r == q) {
        return;
    }
    if (r != 0) {
        *((uint8_t *)r + 0x86) = 0;
        vt = *(void ***)r;
        (*(void (**)(void *))((uint8_t *)vt + 0x24))(r);
    }
    if (q != 0) {
        *((uint8_t *)q + 0x86) = 1;
        vt = *(void ***)q;
        (*(void (**)(void *))((uint8_t *)vt + 0x24))(q);
    }
    vt = *(void ***)p;
    (*(void (**)(void *, void *))((uint8_t *)vt + 0x20))(p, q);
}
