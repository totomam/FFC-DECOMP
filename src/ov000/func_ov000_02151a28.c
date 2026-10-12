#include "ffc/types.h"

extern uint8_t *func_ov000_02152ae4(int x);
extern int func_ov000_02154618(void *p);
extern int func_ov000_02154580(void *p);

int func_ov000_02151a28(void *p)
{
    uint8_t *base = func_ov000_02152ae4(0x10);
    uint32_t v;
    uint8_t bit;

    v = (uint32_t)(base[0x14bc] << 28) >> 28;
    if (v == 0 || v == 4) {
        bit = (uint8_t)((*(uint16_t *)((uint8_t *)p + 0x2c) >> 4) & 1);
        if (bit == 1) {
            if (func_ov000_02154618((uint8_t *)p + 0xc) == 1) {
                return 0x12;
            }
        }
    }
    v = (uint32_t)(base[0x14bc] << 28) >> 28;
    if (v == 0 || v == 5) {
        bit = (uint8_t)((*(uint16_t *)((uint8_t *)p + 0x2c) >> 4) & 1);
        if (bit == 1) {
            if (func_ov000_02154580((uint8_t *)p + 0xc) == 1) {
                return 0x13;
            }
        }
    }
    return -1;
}
