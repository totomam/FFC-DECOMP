#include "ffc/types.h"

extern void func_ov000_0214b6dc(void *a);

int func_ov000_0214b7b8(void *a0) {
    uint8_t *a = (uint8_t *)a0;
    uint8_t *b = *(uint8_t **)(a + 0xc);

    if (*(uint32_t *)(b + 0x824) == 0 || b[0x456] == 0) {
        func_ov000_0214b6dc(a);
    }
    if (*(uint32_t *)(b + 0x824) != 0 && b[0x456] != 0) {
        return *(int32_t *)(b + 0x828) - *(int32_t *)(b + 0x82c);
    }
    if (*(uint32_t *)(b + 0x824) == 0) {
        if (a[8] != 4 || b[0x455] == 9) {
            return -1;
        }
    }
    return 0;
}
