#include "ffc/types.h"

extern void func_02077a7c(void *dst, uint32_t n);
extern void *func_02077bd0(void *p);
extern void func_02077aa4(void *a, void *b);
extern uint32_t data_0213e200;
extern uint8_t data_0213e204[];

typedef struct { uint32_t lo : 8; uint32_t hi : 24; } BF;
typedef struct { uint32_t a; uint32_t pad[5]; uint32_t b; uint32_t c; BF f; } S;

void func_02077bec(S *p, uint32_t a, uint32_t b, uint32_t c, uint16_t d) {
    uint32_t n = 4;
    p->a = a;
    p->b = b;
    p->c = c;
    *(uint32_t*)&p->f = 0;
    p->f.lo = 0;
    *(uint32_t*)&p->f |= (uint8_t)d;
    func_02077a7c((uint8_t *)p + 0xc, n);
    if (data_0213e200 == 0) {
        func_02077a7c(data_0213e204, n);
        data_0213e200 = 1;
    }
    void *q = func_02077bd0(p);
    func_02077aa4(q, p);
}
