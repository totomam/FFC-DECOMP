#include "ffc/types.h"

extern int func_02092a04(uint8_t *a, uint8_t *b, uint16_t c);
extern uint8_t *data_ov000_0216e26c[];

int func_ov000_02152d4c(void) {
    uint8_t *base = data_ov000_0216e26c[4];
    uint8_t *arg1 = base + 0xc24;
    uint8_t n = base[0x14c3];
    uint32_t blk = n * 0xc0;
    uint8_t cnt;
    uint8_t i;

    if (base[0x14bd] >= 0x12) {
        return 1;
    }
    cnt = base[0x14c2];
    for (i = 0; i < cnt; i++) {
        if (i != n) {
            if (base[0xbf5 + 4 * i] < 0x12) {
                if (func_02092a04(arg1 + blk, arg1 + 0xc0 * i,
                                  *(uint16_t *)(base + 0xc2a + 0xc0 * i)) == 0) {
                    return 2;
                }
            }
        }
    }
    return 1;
}
