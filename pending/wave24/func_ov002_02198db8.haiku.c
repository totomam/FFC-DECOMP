#include "ffc/types.h"

extern int func_ov002_0219c710(void *p, void *q);

int func_ov002_02198db8(uint8_t *a, uint8_t *b) {
    uint32_t i;
    for (i = 0; i < 2; i++) {
        int r = func_ov002_0219c710(*(void **)(a + 0xe8 + i * 4), b);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
