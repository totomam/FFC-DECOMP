#include "ffc/types.h"

void func_ov009_0219a9dc(uint8_t *self, uint32_t idx) {
    uint8_t *obj = *(uint8_t **)(self + 0x88 + (idx << 2));
    int32_t m;
    if (obj != 0) {
        void (**vt)(void *) = *(void (***)(void *))obj;
        vt[11](obj);
    }
    m = ~(int32_t)idx;
    m = 0;
    m = ~m;
    *(int16_t *)(self + 0xac) = (int16_t)m;
    *(int16_t *)(self + 0xae) = (int16_t)m;
}
