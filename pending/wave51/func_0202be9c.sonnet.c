#include "ffc/types.h"

extern void *data_020ad958;
extern void func_0202ad8c(void *p);
extern void *func_0205681c(uint32_t size);
extern void *func_02023800(void *p);
extern void func_02022e64(void *x);
extern void func_02023e50(void *p, uint32_t sz);
extern void func_02024db0(void *p, uint32_t v);

typedef struct S {
    void *vt;
    uint8_t pad0[0x24];
    uint32_t f28;
    uint8_t pad1[0x19c - 0x2c];
    void *slots[0x260 - 0];
    uint32_t f1c;
    uint32_t cnt;
} S;

S *func_0202be9c(S *self, void *a, uint32_t n)
{
    uint32_t i;
    func_0202ad8c(self);
    self->vt = &data_020ad958;
    self->cnt = n;
    for (i = 0; i < self->cnt; i++) {
        void *q = func_0205681c(0x2e4);
        if (q != 0) q = func_02023800(q);
        self->slots[i] = q;
        func_02022e64(a);
        func_02023e50(self->slots[i], 0x1000);
        func_02024db0(self->slots[i], 0);
    }
    self->f1c = 0;
    self->f28 = 0;
    return self;
}
