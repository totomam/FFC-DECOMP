#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_0203dc40(uint8_t *obj);
extern uint32_t func_ov003_0214c18c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_0209e078;
extern uint32_t data_020aeef0[2];

typedef struct { uint32_t a, b; } Pair;

void func_0203e334(uint8_t *a0) {
    uint32_t r4 = func_020424e0(*(uint32_t *)(a0 + 0x88));
    uint32_t r2 = func_0203dc40(a0);
    uint32_t r0 = func_ov003_0214c18c(r4, *(uint32_t *)(a0 + 0xb8), r2,
                                      *(uint32_t *)(a0 + 0xf0),
                                      *(uint32_t *)(a0 + 0xf4), data_0209e078);
    func_02056bc0(a0 + 0x14, (void *)r0);
    *(Pair *)(a0 + 0x80) = *(Pair *)data_020aeef0;
}
