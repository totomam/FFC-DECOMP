#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_ov003_0214b3a0(void *h, uint32_t flag, uint8_t *a, uint8_t *b);
extern void func_ov003_0214b3b8(void *h, uint32_t v, uint32_t b2, uint32_t b3, uint32_t b4, uint32_t b5, uint32_t b6, uint8_t *c, uint8_t *d);
extern void func_ov003_0214ba20(void *h, uint32_t k, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_ov003_0214b670(uint8_t *p) {
    uint8_t buf[4];
    uint32_t r4;
    uint64_t res;

    res = func_0209a978(*(uint32_t *)(p + 0x98), *(uint32_t *)(p + 0x94));
    if ((uint32_t)(res >> 32) == 0) {
        r4 = 0;
        if (*(uint32_t *)(p + 0x8c) != 1) {
            r4 = 1;
        }
        func_ov003_0214b3a0(*(void **)(p + 0x88), r4, &buf[3], &buf[2]);
        if (p[0x90]) {
            buf[3] = (buf[3] == 0);
        }
        if (p[0x91]) {
            buf[2] = (buf[2] == 0);
        }
        func_ov003_0214b3b8(*(void **)(p + 0x88), *(uint32_t *)(p + 0x8c),
                            buf[3], buf[2], buf[3], buf[2],
                            *(uint32_t *)(p + 0x9c), &buf[0], &buf[1]);
        if (r4 == 0 && buf[0] == 0) {
            func_ov003_0214ba20(*(void **)(p + 0x88), 1, 0, 0, 0, 0);
            return;
        }
        if (r4 == 1 && buf[1] == 0) {
            func_ov003_0214ba20(*(void **)(p + 0x88), 2, 0, 0, 0, 0);
            return;
        }
    }
    *(uint32_t *)(p + 0x98) = *(uint32_t *)(p + 0x98) + 1;
}
