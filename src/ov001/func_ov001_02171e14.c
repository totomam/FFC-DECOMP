#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e);
extern char data_ov001_0218f32c[];

typedef uint32_t (*cb_t)(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);

void func_ov001_02171e14(uint8_t *p) {
    cb_t f;
    uint32_t r4;
    uint32_t r;

    if (*(uint32_t *)(p + 0x40) != 0) {
        func_ov000_021652a8(8, 0, 2, data_ov001_0218f32c, *(uint32_t *)(p + 0x54));
    }
    f = *(cb_t *)(p + 0x48);
    if (f != 0) {
        if (*(uint32_t *)(p + 0xc) == 0) {
            r4 = *(uint32_t *)(p + 0xec);
        } else {
            r4 = 0;
        }
        r = f(*(uint32_t *)(p + 0x4), *(uint32_t *)(p + 0x40), r4,
              *(uint32_t *)(p + 0x128), *(uint32_t *)(p + 0x4c));
        if (r4 != 0 && r == 0) {
            *(uint32_t *)(p + 0x104) = 1;
        }
    }
}
