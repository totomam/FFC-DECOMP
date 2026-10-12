#include "ffc/types.h"

extern void func_ov011_021c2d4c(void *p);
extern void func_ov009_0219a308(uint32_t v);
extern void func_020697ac(void *p);
extern void func_ov011_021c3100(void *p);

void func_ov011_021c0784(uint8_t *p) {
    uint32_t v;
    func_ov011_021c2d4c(p);
    if (p[0x279] < 5) {
        func_ov009_0219a308(*(uint32_t *)(p + 0xd8 + (p[0x279] << 2)));
        v = *(uint32_t *)(p + 0xd8 + (p[0x279] << 2));
    } else {
        func_ov009_0219a308(*(uint32_t *)(p + 0xec + ((p[0x279] - 5) << 2)));
        v = *(uint32_t *)(p + 0xec + ((p[0x279] - 5) << 2));
    }
    *(uint32_t *)(p + 0x33c) = v;
    func_020697ac(p);
    func_ov011_021c3100(p);
}
