#include "ffc/types.h"

extern uint32_t func_0208d260(void *p);
extern void func_020849c4(void *p, void *buf, uint32_t n);

void func_0208e688(uint8_t *a) {
    uint8_t *obj = *(uint8_t **)(a + 0x1c);
    uint8_t *p;
    uint16_t r6;
    uint16_t r7;
    uint32_t k;

    if (obj == 0) {
        return;
    }
    if (*(uint16_t *)(a + 2) == 0) {
        switch (*(uint16_t *)(a + 4)) {
        case 7:
        case 9:
        case 0x19:
        case 0x1a:
            return;
        case 0x15:
            break;
        default:
            return;
        }
        p = *(uint8_t **)(a + 0xc);
        r6 = *(uint16_t *)(a + 0x10);
        r7 = *(uint16_t *)p;
        k = func_0208d260(p);
        if (r6 != *(uint16_t *)(obj + 0x814)) {
            if (r6 > 0x200) {
                r6 = 0x200;
            }
        }
        if (r6 < 4) {
            return;
        }
        if (!(r7 & (1u << k))) {
            return;
        }
        func_020849c4(p, obj + (*(uint16_t *)(obj + 0x808) << 9), r6);
        *(uint16_t *)(obj + 0x800 + (*(uint16_t *)(obj + 0x808) << 1)) = *(uint16_t *)(a + 0x1a) >> 1;
        *(uint16_t *)(obj + 0x808) = (*(uint16_t *)(obj + 0x808) + 1) & 3;
    } else {
        *(uint16_t *)(obj + 0x81c) = 5;
    }
}
