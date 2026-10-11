#include "ffc/types.h"

extern int func_ov002_02198dec(void *p);
extern void func_ov002_0219f4d0(int a, uint32_t b);

void func_ov002_02197ae4(uint8_t *p) {
    if (p[0x18] != 0) {
        void *q = *(void **)(p + 0x14);
        if (q != 0) {
            uint32_t *cnt = (uint32_t *)(p + 0x1c);
            *cnt = *cnt + 1;
            int r = func_ov002_02198dec(q);
            func_ov002_0219f4d0(r, *cnt);
        }
    }
}
