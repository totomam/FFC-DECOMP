#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02023570(void *a, void *b, void *c);
extern void func_02087678(void *p);

void func_0206a8c4(uint8_t *a, uint32_t id)
{
    struct { void * volatile p; uint32_t q; void *out; void *m; uint32_t pad[8]; } L;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint32_t *n;
    uint16_t old, en;
    uint8_t *e;
    int go;
    uint32_t *end;

    L.p = a;
    L.p = a + 0xe4;
    func_0208763c(a + 0xe4);
    end = (uint32_t *)(a + 0x10);
    n = *(uint32_t **)(a + 0x14);
    go = 1;
    goto cond;
    for (;;) {
        n = (uint32_t *)n[1];
cond:
        go = 0;
        if (n != end && n[2] != id) go = 1;
        if (!go) break;
    }
    if (n != (uint32_t *)(a + 0x10)) {
        L.m = n;
        func_02023570(&L.out, a + 0xc, &L.m);
        old = *ime;
        *ime = 0;
        *(int32_t *)(a + 0xfc) -= 1;
        en = 0;
        (void)*ime;
        if (old != 0) en = 1;
        *ime = en;
    }
    func_02087678(L.p);
}
