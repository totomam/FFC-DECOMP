#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
typedef struct { uint32_t a; uint32_t b; uint32_t c; uint8_t d; } S;
extern void func_02016b68(S *s, uint32_t x);
extern void *func_02052d90(uint32_t a, uint32_t b);
extern long long func_0201b7b0(uint32_t x);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *o);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;
extern uint32_t data_ov007_021c46bc[2];
void func_ov007_021a81dc(uint8_t *self) {
    S s0; S *s = &s0;
    int n;
    func_02016b68(s, data_020b8e44);
    n = *(uint16_t *)((uint8_t *)func_02052d90(s->b, s->c) + 4);
    long long t = func_0201b7b0(data_020b93b8);
    *(long long *)(self + 0x140) = t + n;
    if (s->b != 0) {
        if (s->d != 0) func_02052d3c(s->b, s->c);
        func_02052c04(s->b);
    }
    func_02053290(s);
    { P pr = *(P *)data_ov007_021c46bc; *(P *)(self + 0xb8) = pr; }
}
