#include "ffc/types.h"

extern void func_ov000_0215ac68(void);

void func_02072574(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x14);
    if (q[0x24] == 0) {
        func_ov000_0215ac68();
        q = *(uint8_t **)(p + 0x14);
        q[0x20] = 0;
        *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & ~0xffu) | 2;
    }
}
