#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern uint32_t data_020ac058[];

typedef struct {
    uint32_t v[6];
} Blk;

uint32_t func_ov002_021c9234(uint32_t p0, Blk *p1, uint8_t p2)
{
    Blk tmp;
    uint32_t *o;
    int i;

    o = (uint32_t *)func_0205681c(0x30);
    if (o != 0) {
        tmp = *p1;
        o[2] = 0;
        o[3] = 0x1014c;
        o[0] = (uint32_t)data_020ac058;
        for (i = 0; i < 6; i++) {
            o[5 + i] = 0;
        }
        o[4] = p0;
        *(Blk *)(o + 5) = tmp;
        *((uint8_t *)o + 0x2c) = p2;
    }
    return (uint32_t)o;
}
