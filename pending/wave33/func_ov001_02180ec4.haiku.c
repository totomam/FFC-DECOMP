#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *obj);
extern void *func_ov000_0216876c(void *obj, int32_t idx);
extern int32_t func_ov001_02180cb4(void *a, int32_t x, int32_t y, int32_t z);
extern void func_ov001_02180e68(void *a, void *item, int32_t idx);

int32_t func_ov001_02180ec4(void *self) {
    uint8_t *a = (uint8_t *)self;
    int32_t i;
    uint8_t *item;

restart:
    i = func_ov000_02168768(*(void **)(a + 0x5c)) - 1;
    if (i >= 0) {
        do {
            item = (uint8_t *)func_ov000_0216876c(*(void **)(a + 0x5c), i);
            if (*(uint16_t *)(item + 0xc) == *(uint16_t *)(a + 0x66)) {
                if (func_ov001_02180cb4(a, *(int32_t *)(a + 0x44) + *(int32_t *)item,
                                        *(int32_t *)(item + 8), *(int32_t *)(item + 4)) == 0) {
                    return 0;
                }
                func_ov001_02180e68(a, item, i);
                goto restart;
            }
            i--;
        } while (i >= 0);
    }
    return 1;
}
