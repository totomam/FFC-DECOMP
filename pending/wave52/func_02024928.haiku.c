#include "ffc/types.h"

extern void *func_020235fc(void *p);
extern int func_02092a04(void *a, void *b, int n);

int func_02024928(uint8_t *a, void *key)
{
    int result = -1;
    uint8_t *x;
    int *y;
    int count;
    int i;
    uint8_t *base;

    x = *(uint8_t **)(a + 0xe8);
    if (((uint32_t *)x)[3] != 0) {
        y = (int *)func_020235fc(x);
        count = y[0];
        if (*(int *)(*(uint8_t **)(a + 0xe8)) <= 0x20052) {
            base = (uint8_t *)(y + 1);
            for (i = 0; i < count; i++) {
                if (func_02092a04(base + i * 0x40, key, 0x10) == 0) {
                    result = i;
                    break;
                }
            }
            return result;
        }
        base = (uint8_t *)(y + 1);
        for (i = 0; i < count; i++) {
            if (func_02092a04(base + i * 0x60, key, 0x10) == 0) {
                result = i;
                break;
            }
        }
    }
    return result;
}
