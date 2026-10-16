#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
typedef struct { uint8_t pad[0xb8]; uint32_t f; uint8_t pad2[0xec-0xbc]; void *arr[8]; } T;
extern void *func_0205681c(uint32_t n);
extern void func_ov009_021ad660(S *o, T *p, uint32_t i);
extern void *func_ov009_0219a130(void *o, uint32_t a, S s, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_020695ec(T *p, void *q);
void func_ov009_021a4670(T *p, uint32_t i) {
    void *o = func_0205681c(0xb4);
    if (o != 0) {
        S s; func_ov009_021ad660(&s, p, i);
        o = func_ov009_0219a130(o, p->f, s, 0xffff, 1, 0, 0);
    }
    void **q = p->arr;
    q += i;
    *q = o;
    func_020695ec(p, o);
}
