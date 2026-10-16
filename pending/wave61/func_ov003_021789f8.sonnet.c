#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
extern void *func_0205681c(int n);
extern void func_02054114(int n);
extern uint32_t data_ov003_0217bd8c;
extern Pair data_ov003_0217be3c;
void func_ov003_021789f8(uint8_t *self) {
    uint32_t *o = (uint32_t *)func_0205681c(0x18);
    Pair pr;
    if (o != 0) {
        o[3] &= ~0xff;
        o[0] = (uint32_t)&data_ov003_0217bd8c;
        o[5] = (uint32_t)self;
    }
    *(uint32_t **)(self + 0xb4) = o;
    func_02054114(0);
    pr = data_ov003_0217be3c;
    *(Pair *)(self + 0x80) = pr;
}
