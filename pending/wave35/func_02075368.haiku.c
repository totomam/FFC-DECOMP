#include "ffc/types.h"

extern int func_02071df8(void *v);
extern void func_02071e0c(void *v);
extern int func_02071e3c(void *v);
extern void func_02071e28(void *v);
extern uint32_t data_020b26c0[];

typedef struct { uint32_t a; uint32_t b; } Pair;

#define GETV(s) (*(void **)((uint8_t *)*(void **)((uint8_t *)(s) + 0x88) + 0x20))

void func_02075368(void *self) {
    Pair *src;
    Pair v;
    if (func_02071df8(GETV(self)) == 0) {
        func_02071e0c(GETV(self));
    } else {
        if (func_02071e3c(GETV(self)) != 0) {
            func_02071e28(GETV(self));
        }
    }
    src = (Pair *)data_020b26c0;
    v = *src;
    *(Pair *)((uint8_t *)self + 0x80) = v;
}
