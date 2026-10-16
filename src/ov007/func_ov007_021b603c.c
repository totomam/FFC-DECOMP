#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { uint8_t pad[0x138]; P *p; } S;
extern void *func_02056aec(void *a);
extern void *func_0203b708(int a);
extern void func_02056bc0(void *object, void *node);
void func_ov007_021b603c(S *self) {
    void *a, *b;
    uint8_t *q;
    uint64_t v = 100000000;
    P *p = self->p;
    *(uint64_t*)p = v;
    a = func_02056aec(self);
    b = func_0203b708(0x1e);
    q = (uint8_t*)self + 0x14;
    func_02056bc0(q, b);
    func_02056bc0(q, a);
}
