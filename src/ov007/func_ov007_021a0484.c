#include "ffc/types.h"

extern uint32_t data_020b93b8;
extern void func_0201b8ec(uint32_t a, uint32_t b);

void func_ov007_021a0484(uint8_t *p) {
    if (p[0x17c] == 0) {
        if (p[0x16a] > 2) {
            func_0201b8ec(data_020b93b8, 2);
        }
        p[0x17c] = 1;
    }
}
