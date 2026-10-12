#include "ffc/types.h"

uint8_t func_ov000_02153918(uint8_t *p) {
    int i;
    uint8_t cnt = 0;
    int n = p[0x14c2];
    for (i = 0; i < n; i++) {
        uint8_t *st = p + 0xbf7 + (i << 2);
        uint8_t *fl = p + 0xbf4 + (i << 2);
        if (*fl != 0) {
            *st |= 0x80;
        } else if ((*(uint16_t *)(p + i * 0xc0 + 0xc56) - 1) == (*st & 0x7f)) {
            *st |= 0x80;
        } else {
            *st &= ~0x80;
            cnt++;
        }
    }
    return cnt;
}
