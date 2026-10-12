#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern uint32_t func_ov009_0219e46c(void *self, void *a, uint32_t z, uint32_t b, uint32_t c);
extern uint32_t func_02019760(uint32_t x);
extern uint32_t func_02036418(void *p);
extern uint32_t func_02019e78(uint32_t x, uint32_t y, uint32_t z);
extern uint32_t func_ov009_0219e538(uint32_t x, uint32_t y, uint32_t z);
extern uint8_t data_ov009_021b0354[];
extern uint32_t data_020b8e44;
extern Pair data_ov009_021b0580;

uint8_t *func_ov009_0219f6fc(uint8_t *self, void *a, uint32_t b, uint32_t c, uint8_t e)
{
    uint32_t v;
    uint32_t s;
    uint32_t mode;
    uint8_t flag = 0;
    Pair p;

    func_ov009_0219e46c(self, a, 0, b, c);
    *(uint8_t **)self = data_ov009_021b0354;
    *(uint8_t *)(self + 0x115) = e;
    v = func_02019760(data_020b8e44);
    s = func_02019e78(data_020b8e44, func_02036418(self + 0x84), 0);
    s = func_ov009_0219e538(s, v, 0);
    *(uint32_t *)(self + 0x115 + 3) = s;
    if (s != 0 && s != 3) {
        flag = 1;
    }
    self[0x114] = flag;
    mode = 1;
    if (self[0x114] == 0) {
        mode = 4;
    }
    *(uint32_t *)(self + 0x11c) = mode;
    p = data_ov009_021b0580;
    *(Pair *)(self + 0xe8) = p;
    return self;
}
