#include "ffc/types.h"

extern void func_ov000_02146ce8(void *p);

#define W(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

void func_ov000_02146c80(void *self)
{
    uint8_t *s = (uint8_t *)self;
    int i;

restart:
    if (W(s, 0x70) != 0 && W(s, 0x50) >= W(s, 0x70)) {
        uint32_t t = W(s, 0x70) + W(s, 0x74);
        W(s, 0x24) = W(s, 0x24) + (t - W(s, 0x50));
        W(s, 0x50) = t;
        W(s, 0x70) = 0;
        func_ov000_02146ce8(self);
    }

    for (i = 0; i < 3; i++) {
        uint8_t *p = s + i * 12;
        if (W(p, 0x70) != 0 && W(p, 0x7c) != 0 && W(p, 0x70) + W(p, 0x74) >= W(p, 0x7c)) {
            W(p, 0x74) = W(p, 0x7c) + W(p, 0x80) - W(p, 0x70);
            W(p, 0x7c) = 0;
            func_ov000_02146ce8(self);
            goto restart;
        }
    }
}
