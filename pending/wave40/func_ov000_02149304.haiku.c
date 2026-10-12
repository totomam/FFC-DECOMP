#include "ffc/types.h"

extern uint16_t func_02084118(void *dst, void *src, uint32_t n);
extern int32_t func_ov000_02148d24(int32_t idx, void *p, uint32_t n);

int32_t func_ov000_02149304(uint8_t *a, void *b) {
    uint32_t off;
    int32_t ok = 1;
    int32_t i;

    for (i = 0; i < 3; i++) {
        off = i << 8;
        *(uint16_t *)(a + off + 0xfe) = func_02084118(b, a + off, 0xfe);
        if (ok && func_ov000_02148d24(i, a + off, 0x100) >= 0) {
            ok = 1;
        } else {
            ok = 0;
        }
    }

    off = 3 << 8;
    *(uint16_t *)(a + off + 0xfe) = func_02084118(b, a + off, 0xfe);
    if (ok && func_ov000_02148d24(3, a + off, 0x100) >= 0) {
        return 1;
    }
    return 0;
}
