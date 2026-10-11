#include "ffc/types.h"

extern int func_ov003_021464f4(uint32_t a, uint16_t b);
extern int func_ov003_021586d8(void);

void func_ov003_0214dff4(uint8_t *p) {
    if (func_ov003_021464f4(*(uint32_t *)(p + 0x80), *(uint16_t *)(p + 0x84)) == 0 ||
        func_ov003_021586d8() == 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        *(uint32_t *)(p + 0xc) = (v & ~0xffu) | 2;
    }
}
