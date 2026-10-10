#include "ffc/types.h"

typedef struct Inner {
    uint32_t pad[5];
    uint32_t field14;
} Inner;

typedef struct Outer {
    uint32_t pad;
    Inner *inner;
} Outer;

extern Outer data_ov006_021bc7ec;

uint32_t func_ov006_021b0a58(void)
{
    if (data_ov006_021bc7ec.inner->field14 != 0) {
        return 1;
    }
    return 0;
}
