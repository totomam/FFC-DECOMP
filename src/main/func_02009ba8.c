#include "ffc/types.h"

extern void func_02056c9c(void *self);
extern void func_020095b8(void *dst, void *src);
extern void func_020393a8(void *dst, void *src, int n);
extern void *func_020059cc(void *object);
extern uint32_t data_020aae38;
extern uint32_t data_020aaf04[2];

typedef struct { uint32_t a; uint32_t b; } Pair;

void *func_02009ba8(void *self, int unused, void *a, uint32_t b) {
    uint32_t l1[3];
    uint32_t l0[3];
    func_02056c9c(self);
    *(uint32_t *)self = (uint32_t)&data_020aae38;
    func_020095b8(l1, a);
    func_020393a8(l0, l1, 1);
    func_020095b8((char *)self + 0x88, l0);
    func_020059cc(l0);
    func_020059cc(l1);
    *(uint32_t *)((char *)self + 0xa8) = 0;
    *(uint32_t *)((char *)self + 0xac) = b;
    *(Pair *)((char *)self + 0x80) = *(Pair *)data_020aaf04;
    return self;
}
