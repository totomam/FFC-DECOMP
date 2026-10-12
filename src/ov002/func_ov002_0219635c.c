#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern void func_02075ad0(uint32_t a, uint8_t *b, uint8_t *c);
extern uint32_t func_02075ac0(uint32_t a);

int func_ov002_0219635c(uint8_t *a) {
    int r4 = 0;
    uint32_t *p1 = *(uint32_t **)&data_020b8e44;
    uint32_t *p2 = *(uint32_t **)p1;
    uint32_t r6 = *(uint32_t *)((uint8_t *)p2 + 0x88);
    if (r6 != 0) {
        uint32_t k = 0x3e0;
        uint32_t v;
        uint32_t ret;
        func_02075ad0(r6, a + k, a + (k + 4));
        v = *(uint32_t *)(a + (k + 4));
        switch (v) {
        case 3:
        case 6:
        case 7:
            r4 = 1;
            break;
        default:
            break;
        }
        ret = func_02075ac0(r6);
        if (ret != 0 || r4 != 0) {
            r4 = 1;
        } else {
            r4 = 0;
        }
    }
    return r4;
}
