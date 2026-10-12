#include "ffc/types.h"

extern uint16_t func_02084118(void *a, void *b, uint32_t c);
extern int func_ov000_02148d24(int a, void *b, uint32_t c);

int func_ov000_02149370(void *base, void *p) {
    int ret = 1;
    int i;
    for (i = 0; i < 3; i++) {
        uint8_t *q = (uint8_t *)base + i * 512;
        *(uint16_t *)(q + 0xfe) = func_02084118(p, q, 0xfe);
        *(uint16_t *)(q + 510) = func_02084118(p, q + 256, 0xfe);
        if (ret && func_ov000_02148d24(i + 0x11, q, 0x200) >= 0) {
            ret = 1;
        } else {
            ret = 0;
        }
    }
    return ret;
}
