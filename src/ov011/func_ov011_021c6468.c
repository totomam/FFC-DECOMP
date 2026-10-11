#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_ov011_021c65b8(void *p, uint8_t i);

void func_ov011_021c6468(uint8_t *p, void *v)
{
    uint8_t i;

    if (p[0xe4] != 0) {
        p[0xe4] = 0;
        return;
    }
    for (i = 0; i < 2; i++) {
        if (((void **)(p + 0xcc))[i] == v) {
            func_02021338(0xba);
            func_ov011_021c65b8(p, i);
            return;
        }
    }
}
