#include "ffc/types.h"

extern void func_02097e24(void);

void *func_02098d4c(void *a) {
    uint32_t r3 = 0;
    uint8_t m;
    uint16_t h;
    uint8_t *obj = *(uint8_t **)((uint8_t *)a + 4);
    uint32_t r2 = 0;
    uint8_t *inner = obj + ((int32_t *)*(int32_t *)obj)[-3];

    m = (uint8_t)(inner[0x2e] & 5);
    if (m == 0) {
        h = *(uint16_t *)(inner + 0x2c);
        if ((uint16_t)(h & 0x2000) != 0) {
            r3 = 1;
        }
    }
    if (r3 != 0) {
        if (((uint8_t *)a)[1] == 0) {
            r2 = 1;
        }
    }
    if (r2 != 0) {
        func_02097e24();
    }
    return a;
}
