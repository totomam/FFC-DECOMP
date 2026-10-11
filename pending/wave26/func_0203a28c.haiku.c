#include "ffc/types.h"

extern uint8_t data_020ae920[];
extern void func_020396c4(void *p);
extern void func_02036750(void *p);

typedef struct {
    uint32_t mode;
    uint32_t f4;
    uint8_t b[5];
    uint8_t pad[3];
    uint8_t inner[4];
} Sub;

uint8_t *func_0203a28c(uint8_t *self, uint32_t val)
{
    Sub *s;

    func_020396c4(self);
    *(uint8_t **)self = data_020ae920;
    ((Sub *)(self + 0x88))->mode = 6;
    s = (Sub *)(self + 0x88);
    s->f4 = 0;
    s->b[0] = 0;
    s->b[1] = 0;
    s->b[2] = 0;
    s->b[3] = 0;
    s->b[4] = 0;
    func_02036750(s->inner);
    *(uint32_t *)(self + 0xf0) = val;
    return self;
}
