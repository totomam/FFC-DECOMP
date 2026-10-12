#include "ffc/types.h"

typedef struct {
    uint32_t pad0;
    uint32_t f4;
    uint32_t f8;
    uint32_t pad0c;
    uint32_t pad10;
    uint32_t f14;
} Obj;

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t data_020b0b10;
extern uint32_t data_020b124c;

uint32_t *func_0205f960(Obj *self, uint32_t a, uint32_t b, uint32_t c, uint32_t e)
{
    uint32_t lim;
    uint32_t *q;
    uint32_t prod;
    uint32_t off;
    uint32_t *ret;

    if (self->f14 == 0x20) {
        lim = self->f8 >> 5;
    } else {
        lim = self->f8 >> 6;
    }
    q = (c < lim) ? &c : &lim;
    c = *q;
    prod = c * self->f14;

    if (self->f14 == 0x20) {
        ret = func_0205681c(0x24);
        if (ret != 0) {
            off = self->f4 + b * self->f14;
            ret[3] &= ~0xffu;
            ret[0] = (uint32_t)&data_020b0b10;
            ret[5] = a;
            ret[6] = off;
            ret[7] = prod;
            *((uint8_t *)ret + 0x20) = 0;
        }
    } else {
        ret = func_0205681c(0x24);
        if (ret != 0) {
            off = self->f4 + b * self->f14;
            ret[3] &= ~0xffu;
            ret[0] = (uint32_t)&data_020b124c;
            ret[5] = a;
            ret[6] = off;
            ret[7] = prod;
            ret[8] = e;
        }
    }
    return ret;
}
