#include "ffc/types.h"
extern void func_ov011_021c5650(void);
void func_ov011_021c59dc(uint8_t *p, uint32_t key) {
    uint8_t i;
    if (p[0x128] != 0) { p[0x128] = 0; return; }
    for (i = 0; i < p[0x118]; i++) {
        if (key == *(uint32_t *)(p + 0xbc + i * 4)) {
            p[0x117] = i;
            func_ov011_021c5650();
            return;
        }
    }
}
