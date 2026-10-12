#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t size);

void func_0201f8c0(uint8_t *self, int idx)
{
    uint8_t *base = *(uint8_t **)(self + 0x90);
    uint8_t *arr;
    int i = 0;

    func_02084b2c(base + (idx << 6), 0, 0x40);

    arr = *(uint8_t **)(self + 0x94);
    for (i = 0; i < 0x3c; i++) {
        if (arr[i] == idx + 1) {
            break;
        }
    }

    for (; i < 0x3b; i++) {
        arr = *(uint8_t **)(self + 0x94);
        arr[i] = arr[i + 1];
    }

    arr = *(uint8_t **)(self + 0x94);
    arr[0x3b] = 0;
}
