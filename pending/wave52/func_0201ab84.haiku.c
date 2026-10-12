#include "ffc/types.h"

extern void func_0208763c(void);
extern uint32_t func_02055054(uint32_t v);
extern void func_02087678(void *p);
extern uint8_t data_020b93bc[];
extern uint32_t data_0213e098;
extern uint32_t data_020ad514;
extern uint32_t data_020ad4f4[];

typedef struct {
    uint32_t t;
    void *p;
    uint8_t f;
} Local;

void func_0201ab84(uint8_t *s) {
    Local L;
    uint32_t r5;
    uint32_t i;
    uint32_t *pp;
    uint64_t *c;
    uint8_t *q;

    L.p = data_020b93bc;
    L.f = 1;
    if (L.f) {
        func_0208763c();
    }
    r5 = func_02055054(data_0213e098);
    c = (uint64_t *)(s + 0x98);
    *c += r5;
    q = *(uint8_t **)(s + 0x3c);
    if (s[0xa0] != 0 && q != 0) {
        *(uint64_t *)(q + 0x90) += r5;
    }
    for (i = 0; i < 10; i++) {
        uint32_t *slot = (uint32_t *)(s + 0xb4) + i;
        L.t = r5 + *slot;
        pp = ((int32_t)data_020ad4f4[8] < (int32_t)L.t) ? &data_020ad514 : &L.t;
        *slot = *pp;
    }
    if (L.f) {
        func_02087678(L.p);
    }
}
