#include "ffc/types.h"

extern void func_ov002_021c95bc(void *self, uint32_t a, uint32_t b, int c);
extern uint8_t data_ov002_021d4878[];
extern uint8_t data_ov002_021d4890[];

void *func_ov002_02197b54(void *p, uint32_t a, uint32_t b) {
    uint32_t *w;

    func_ov002_021c95bc(p, a, b, 1);
    w = (uint32_t *)p;
    w[0x43] = 0xa21b58b6;
    w[0x44] = 0x50434342;
    w[0x45] = 0x5a1bb469;
    *(void **)p = data_ov002_021d4878;
    *(void **)((uint8_t *)p + 0x80) = data_ov002_021d4890;
    return p;
}
