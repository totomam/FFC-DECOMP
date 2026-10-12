#include "ffc/types.h"

uint32_t func_ov000_02145614(uint32_t *p, uint32_t len, uint32_t sum) {
    uint32_t align = (uint32_t)p & 3;
    uint32_t acc = 0;
    uint32_t w;

    if (align != 0) {
        p = (uint32_t *)((uint32_t)p & ~3u);
        w = *p;
        p++;
        switch (align) { case 1:
            w &= 0xffffff00;
            if (len < 3) {
                len += 1;
                goto tail;
            }
            len -= 3;
            goto set;
        break; case 2:
            w &= 0xffff0000;
            if (len < 2) {
                len += 2;
                goto tail;
            }
            len -= 2;
            goto set;
        break; default:
            w &= 0xff000000;
            len -= 1;
        }
set:
        acc = w;
    }

    while (len >= 4) {
        w = *p;
        acc += w;
        if (acc < w) {
            acc++;
        }
        len -= 4;
        p++;
    }

    if (len == 0) {
        goto fold;
    }
    w = *p;

tail:
    if (len == 1) {
        w = (uint8_t)w;
    } else if (len == 2) {
        w = (uint16_t)w;
    } else {
        w &= 0xffffff;
    }
    acc += w;
    if (acc < w) {
        acc++;
    }

fold:
    acc = (acc & 0xffff) + (acc >> 16);
    acc = (acc & 0xffff) + (acc >> 16);
    if (!(align & 1)) {
        acc = (acc >> 8) + ((acc << 8) & 0xff00);
    }
    uint32_t t = acc + sum;
    return (t & 0xffff) + (t >> 16);
}
