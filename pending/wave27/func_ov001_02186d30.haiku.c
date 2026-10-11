#include "ffc/types.h"

extern uint32_t func_ov001_02185f70(uint32_t x);
extern void func_ov001_02185ddc(uint32_t *p);

void func_ov001_02186d30(uint8_t *self) {
    uint32_t v = *(uint32_t *)(self + 0x7d8);
    if (v) {
        uint32_t local = v;
        if (local) {
            do {
                v = func_ov001_02185f70(v);
                func_ov001_02185ddc(&local);
                local = v;
            } while (v != 0);
        }
        *(uint32_t *)(self + 0x7d8) = 0;
    }
}
