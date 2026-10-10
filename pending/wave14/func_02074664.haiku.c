#include "ffc/types.h"

extern int32_t func_ov001_02188788(void);

typedef struct Inner {
    uint8_t pad[0x13];
    uint8_t f13;
} Inner;

typedef struct Outer {
    uint32_t pad[5];
    Inner *f14;
} Outer;

int32_t func_02074664(Outer *p)
{
    if (p->f14->f13 != 0) {
        return func_ov001_02188788();
    }
    return 0;
}
