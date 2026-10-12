#include "ffc/types.h"

typedef struct Inner { uint8_t pad[0x14]; int32_t count; } Inner;
typedef struct Outer { uint8_t pad[0xc]; Inner *inner; } Outer;

extern int32_t func_ov000_0215999c(int32_t);
extern Outer data_ov000_0217004c;

int32_t func_ov000_021599d0(int32_t a) {
    int32_t i;
    if (data_ov000_0217004c.inner == 0 || a == 0) {
        return -1;
    }
    for (i = 0; i < data_ov000_0217004c.inner->count; i++) {
        if (a == func_ov000_0215999c(i)) {
            return i;
        }
    }
    return -1;
}
