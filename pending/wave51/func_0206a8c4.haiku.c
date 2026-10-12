#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02023570(void *a, void *b, void *c);
extern void func_02087678(void *p);

void func_0206a8c4(uint8_t *a, uint32_t id)
{
    struct { void *p; void *out; void *m; uint32_t pad[8]; } L;
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint8_t *head;
    uint16_t old;
    uint16_t en;
    void *n;
    int go;

    L.p = a;
    L.p = a + 0xe4;
    func_0208763c(L.p);
    head = a + 0x10;
    n = *(void **)(a + 0x14);
    go = (n != head && *(uint32_t *)((uint8_t *)n + 8) != id) ? 1 : 0;
    while (go) {
        n = *(void **)((uint8_t *)n + 4);
        go = (n != head && *(uint32_t *)((uint8_t *)n + 8) != id) ? 1 : 0;
    }
    if (n == head) {
        func_02087678(L.p);
        return;
    }
    L.m = n;
    func_02023570(&L.out, a + 0xc, &L.m);
    old = *ime;
    *ime = 0;
    *(int32_t *)(a + 0xfc) = *(int32_t *)(a + 0xfc) - 1;
    en = 0;
    if (old != 0) {
        en = 1;
    }
    *ime = en;
    func_02087678(L.p);
}
