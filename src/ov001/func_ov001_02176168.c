#include "ffc/types.h"

extern int func_ov001_0217ef6c(void *p, void *d);
extern int func_ov001_0217d000(void *p, void *a1, uint32_t a2, uint32_t a3, void *cb, uint32_t a6);
extern uint8_t data_ov001_021900ec[];
extern uint8_t data_ov001_02190100[];

int func_ov001_02176168(void **h, void *a1, uint32_t a2, uint32_t a3, int (*cb)(void *, void *, uint32_t), uint32_t a6)
{
    uint32_t buf[3];
    uint8_t *r6;

    if (h == 0 || (r6 = (uint8_t *)h[0]) == 0) {
        return 2;
    }
    if (cb == 0) {
        func_ov001_0217ef6c(h, data_ov001_021900ec);
        return 2;
    }
    if (*(uint32_t *)(r6 + 0x1f4) == 4) {
        func_ov001_0217ef6c(h, data_ov001_02190100);
        return 2;
    }
    if (*(uint32_t *)(r6 + 0x108) != 0) {
        uint32_t b2[3] = {0,0,0}; cb(h, b2, a6);
        return 0;
    }
    return func_ov001_0217d000(h, a1, a2, a3, (void *)cb, a6);
}
