#include "ffc/types.h"

struct A {
    uint8_t pad0[4];
    uint32_t *ptr;
    uint8_t pad1[0x29 - 8];
    uint8_t v;
};

extern struct A *data_ov006_021bc780;
extern const uint8_t data_ov006_021b8602[];
extern const uint8_t data_ov006_021b85fc[];

void func_ov006_021aa410(void) {
    struct A *a = data_ov006_021bc780;
    uint8_t v = a->v;
    uint32_t idx = v & 0xf;
    int sel = v >> 4;
    if (v >= 0x20) {
        idx = 0xf;
        sel = 1;
    }
    uint32_t *q = a->ptr;
    uint32_t w = *q;
    uint32_t t = data_ov006_021b8602[idx];
    w &= 0xfe00ff00;
    uint32_t s = data_ov006_021b85fc[sel];
    *q = (((t << 23) >> 7)) | (w | s);
}
