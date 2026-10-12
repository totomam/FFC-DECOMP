#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02023514(void *a, void *b, void *c, void *d);
extern void func_02087678(void *p);

typedef struct {
    uint32_t a;
    uint8_t *ptr;
    uint32_t out;
    uint8_t *q;
    volatile uint8_t flag;
} Loc;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} S;

void func_0206a854(uint8_t *p, S s) {
    Loc L;
    uint16_t old;
    uint32_t n;

    L.q = p + 0xe4;
    L.flag = 1;
    if (L.flag) {
        func_0208763c();
    }
    old = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 0;
    n = *(uint32_t *)(p + 0xfc);
    *(uint32_t *)(p + 0xfc) = n + 1;
    (void)*(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = (old != 0) ? 1 : 0;
    L.ptr = p + 0x10;
    func_02023514(&L.out, p + 0xc, &L.ptr, &s);
    if (L.flag) {
        func_02087678(L.q);
    }
}
