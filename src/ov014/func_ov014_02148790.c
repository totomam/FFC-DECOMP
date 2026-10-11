#include "ffc/types.h"

extern void func_ov014_02147e20(uint32_t);
extern void func_ov014_02147e98(uint32_t);
extern void func_ov014_02147c30(uint32_t);

void func_ov014_02148790(uint8_t *p) {
    if (p[0x14]) {
        func_ov014_02147e20(*(uint32_t *)(p + 0x18));
        func_ov014_02147e98(*(uint32_t *)(p + 0x18));
        func_ov014_02147c30(*(uint32_t *)(p + 0x11C));
        p[0x14] = 0;
    }
}
