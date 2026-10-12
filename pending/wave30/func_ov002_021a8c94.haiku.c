#include "ffc/types.h"

extern uint32_t func_ov002_021a8a2c(void *a, uint32_t b);
extern uint32_t func_ov002_021994c0(void *a, uint32_t b);

uint32_t func_ov002_021a8c94(void *a, void *p, uint32_t k) {
    uint32_t r = 0;
    switch (k) {
    case 6:
        if (*((uint8_t *)p + 0x1c) != 0) {
            r = 0;
        }
        break;
    case 0x17:
        if (*(uint32_t *)((uint8_t *)p + 0x20) == 1) {
            r = 1;
        }
        break;
    }
    if (func_ov002_021a8a2c(a, k) != 0) {
        r = 0;
    }
    if (func_ov002_021994c0(*(void **)((uint8_t *)a + 0xfc), 0x40) != 0) {
        r = 1;
    }
    return r;
}
