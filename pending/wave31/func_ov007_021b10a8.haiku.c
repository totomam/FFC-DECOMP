#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0201f1f0(uint32_t a, uint32_t b, void *c);
extern int func_02036890(void *p);
extern int func_02019ff0(uint32_t a, uint32_t b);
extern uint32_t func_ov007_021af04c(void *p);
extern void func_020367a8(void *p);
extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;

uint32_t func_ov007_021b10a8(void)
{
    uint8_t buf[0x58];
    uint32_t best = 1;
    uint8_t i;

    for (i = 0; i < 3; i++) {
        uint32_t idx;
        func_02036750(buf);
        idx = i + 1;
        func_0201f1f0(data_020b93b8, idx, buf);
        if (func_02036890(buf) != 0) {
            if (func_02019ff0(data_020b8e44, (uint8_t)idx) == 0) {
                uint32_t r = func_ov007_021af04c(buf);
                if (r > best) {
                    best = r;
                }
            }
        }
        func_020367a8(buf);
    }
    return best;
}
