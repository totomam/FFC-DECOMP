#include "ffc/types.h"

extern void *func_ov000_02152ae4(uint32_t x);
extern void func_ov000_02151910(void *p);

typedef struct {
    int16_t a;
    int16_t b;
    void *ptr;
    int32_t c;
} S;

void func_ov000_02151efc(S *p) {
    uint8_t *base = (uint8_t *)func_ov000_02152ae4(0x10);
    if (p->a == 5) {
        if (p->b == 0) {
            return;
        }
        switch (p->c) {
        case 0xd:
            base[0x14c4] = 1;
            break;
        case 0xf:
            base[0x14c4] = 2;
            break;
        case 0x11:
            base[0x14c4] = 3;
            break;
        default:
            base[0x14c4] = 4;
            break;
        }
    } else if (p->a == 7) {
        func_ov000_02151910(p->ptr);
    }
}
