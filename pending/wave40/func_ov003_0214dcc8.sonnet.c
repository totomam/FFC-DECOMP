#include "ffc/types.h"

extern void *func_ov003_0214649c(void *p);
extern void *func_02052d90(uint32_t a, uint32_t b);

int func_ov003_0214dcc8(void *a, uint32_t id)
{
    uint8_t *x, *p, *t, *base, *e;
    uint32_t off, i;

    if (func_ov003_0214649c(a)) {
        x = (uint8_t *)func_ov003_0214649c(a);
        p = (uint8_t *)func_02052d90(*(uint32_t *)(x + 0xe4), *(uint32_t *)(x + 0xe8));
        off = *(uint32_t *)(p + 0x8c);
        t = 0;
        if (off != 0) t = p + off;
        if (t != 0) {
            for (i = 0; i < *(uint32_t *)(t + 8); i++) {
                base = t + *(uint32_t *)(t + 0xc);
                e = base + (i << 3);
                if (e != 0 && e[0] != 0 && *(uint16_t *)(e + 2) != 0 && id == *(uint16_t *)(e + 2))
                    return 1;
            }
        }
    }
    return 0;
}
