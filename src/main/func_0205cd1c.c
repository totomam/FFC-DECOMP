#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02057148(void *obj, int32_t a, int32_t b);
extern char data_020b0ef8[];

void *func_0205cd1c(void *p0, int32_t a, int32_t b, int32_t c, int32_t d)
{
    uint16_t diff = (uint16_t)(b - a);
    uint8_t *o;

    if (diff < 0x8000) {
        if (b < a) {
            b += 0x10000;
        }
    } else {
        if (b > a) {
            b -= 0x10000;
        }
    }

    o = (uint8_t *)func_0205681c(0x48);
    if (o != 0) {
        func_02057148(o, a, b);
        *(void **)o = data_020b0ef8;
        *(void **)(o + 0x44) = p0;
        *(int32_t *)(o + 0x24) = c;
        if (o[0x15] != 0) {
            if (c == 0) {
                *(int32_t *)(o + 0x1c) = 1;
            } else {
                *(int32_t *)(o + 0x1c) = c << 4;
            }
        }
        *(int32_t *)(o + 0x30) = d;
    }
    return o;
}
