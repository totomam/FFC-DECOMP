#include "ffc/types.h"

extern void func_ov003_02155418(void *p, uint16_t a, void *q, uint32_t u);

void func_ov003_021552ac(uint8_t *p, uint32_t u) {
    uint8_t *tbl;
    uint32_t idx;
    uint32_t lim;
    uint16_t *e;

    if (p[0x29] == 0) return;
    if (p[0x24] == 0) return;
    idx = p[0x25];
    tbl = *(uint8_t **)(p + 0x18);
    e = (uint16_t *)(tbl + (idx << 2));
    if (*(uint16_t *)(p + 0x26) == e[1]) {
        func_ov003_02155418(p, e[0], p + 0xc, u);
        lim = *(uint32_t *)(p + 0x1c);
        p[0x25] = p[0x25] + 1;
        if (p[0x25] < lim) return;
        p[0x25] = 1;
        *(uint16_t *)(p + 0x26) = 0;
    } else {
        *(uint16_t *)(p + 0x26) = *(uint16_t *)(p + 0x26) + 1;
    }
}
