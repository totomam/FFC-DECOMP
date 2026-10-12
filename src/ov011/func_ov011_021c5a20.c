#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_ov011_021c5a68(uint8_t *a);

void func_ov011_021c5a20(uint8_t *a, uint32_t v) {
    uint8_t i;
    for (i = 0; i < a[0x118]; i++) {
        if (*(uint32_t *)(a + 0xbc + i * 4) == v) {
            func_02021338(0xbc);
            *(uint32_t *)(*(uint32_t **)(a + 0xf8)) = a[0x117];
            func_ov011_021c5a68(a);
        }
    }
}
