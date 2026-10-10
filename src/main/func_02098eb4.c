#include "ffc/types.h"
extern void func_02097f24(void *);
void *func_02098eb4(void *a) {
    uint8_t *o = *(uint8_t **)((uint8_t *)a + 4);
    uint32_t r2 = 0;
    uint32_t r3 = 0;
    uint8_t *inner = o + ((int32_t *)*(int32_t *)o)[-3];
    uint8_t m = (uint8_t)(inner[0x2e] & 5);
    if (m == 0) {
        uint16_t h = *(uint16_t *)(inner + 0x2c);
        if ((uint16_t)(h & 0x2000) != 0) r3 = 1;
    }
    if (r3 != 0) {
        if (((uint8_t *)a)[1] == 0) r2 = 1;
    }
    if (r2 != 0) func_02097f24(o);
    return a;
}
