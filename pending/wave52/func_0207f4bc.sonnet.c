#include "ffc/types.h"

typedef struct Dev {
    uint8_t pad[0x2c];
    int32_t (*fn)(void);
    uint32_t flags;
} Dev;

typedef struct Mid {
    uint8_t pad[0x20];
    Dev *dev;
} Mid;

typedef struct Top {
    uint8_t pad[8];
    Mid *mid;
} Top;

extern int32_t func_0207dcc8(Top *a, int32_t b);
extern int32_t (*data_020a1a9c[])(Top *);

int32_t func_0207f4bc(Top *a0, uint32_t idx, uint32_t flag)
{
    Dev *d = a0->mid->dev;
    uint32_t bit = 1u << idx;
    int32_t r6 = 0x101;
    volatile int32_t one0 = 1; int32_t one = one0;

    if (d->flags & bit) {
        r6 = d->fn();
        if (r6 > one + 0xff) {
            if (r6 == 0x102) {
                d->flags = d->flags & ~bit;
                r6 = 0x101;
            }
        } else if (r6 < one + 0xff) {
            if (r6 <= 4 && r6 >= 0) {
                if (r6 != 0 && r6 != 1) {
                    if (r6 == 4) {
                    }
                }
            }
        }
    }
    if (r6 == 0x101) {
        if (idx < 0xd) {
            r6 = data_020a1a9c[idx](a0);
        } else {
            r6 = 4;
        }
    }
    if (flag) {
        r6 = func_0207dcc8(a0, r6);
    }
    return r6;
}
