#include "ffc/types.h"

extern uint8_t data_ov006_021bc828[];

typedef struct {
    uint8_t pad0[0x28];
    uint16_t hi;
    uint16_t lo;
    uint8_t pad1[0x38 - 0x2c];
    uint8_t skip : 1;
    uint8_t flag : 1;
} Blk;

int func_ov006_021b4d94(uint16_t *r0)
{
    Blk *p;

    if (((int)(*(uint16_t *)0x2ffffa8 & 0x8000)) >> 15) {
        return 0;
    }
    p = *(Blk **)(data_ov006_021bc828 + 4);
    if (!p->flag) {
        return 0;
    }
    if (r0[0] > p->hi) {
        return 0;
    }
    if (r0[2] < p->hi) {
        return 0;
    }
    if (r0[1] > p->lo) {
        return 0;
    }
    if (r0[3] < p->lo) {
        return 0;
    }
    return 1;
}
