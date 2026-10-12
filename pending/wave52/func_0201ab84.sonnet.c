#include "ffc/types.h"

extern void func_0208763c(void);
extern uint32_t func_02055054(uint32_t v);
extern void func_02087678(void *p);
extern uint8_t data_020b93bc[];
extern uint32_t data_0213e098;
extern int32_t data_020ad514;
extern volatile int32_t data_020ad4f4[];

typedef struct {
    uint8_t pad[0x90];
    uint64_t a;
} Q;
typedef struct {
    uint8_t pad[0x3c];
    Q *q;
    uint8_t pad2[0x98-0x40];
    uint64_t c;
    uint8_t f;
    uint8_t pad3[0xb4-0xa1];
    int32_t slot[10];
} S;

void func_0201ab84(S *s) {
    struct { int32_t t; void *p; uint8_t f; } L;
    uint32_t r5;
    uint32_t i;

    L.p = data_020b93bc;
    L.f = 1;
    if (L.f) {
        func_0208763c();
    }
    r5 = func_02055054(data_0213e098);
    s->c += r5;
    if (s->f != 0 && s->q != 0) {
        s->q->a += r5;
    }
    for (i = 0; i < 10; i++) {
        L.t = r5 + s->slot[i];
        s->slot[i] = *(data_020ad4f4[8] < L.t ? &data_020ad514 : &L.t);
    }
    if (L.f) {
        func_02087678(L.p);
    }
}
