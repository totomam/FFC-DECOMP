#include "ffc/types.h"

extern int32_t func_ov000_02151a28(uint8_t *p);
extern int32_t func_02092a04(uint8_t *a, uint8_t *b, uint32_t c);

int32_t func_ov000_02151ae8(uint8_t *p, int32_t count, uint8_t *tbl) {
    int32_t i;
    volatile uint32_t b;
    volatile uint32_t key;
    if (*(uint16_t *)(p + 0xa) == 0x20) {
        int32_t r = func_ov000_02151a28(p);
        if (r > 0) {
            return r;
        }
    }
    i = 0;
    if (count > 0) {
        key = *(uint16_t *)(p + 0xa);
        b = (uint8_t)key;
        p += 0xc;
        do {
            if (tbl[3] == b) {
                if (func_02092a04(p, tbl + 4, key) == 0) {
                    return tbl[1];
                }
            }
            i++;
            tbl += 0x24;
        } while (i < count);
    }
    return -1;
}
