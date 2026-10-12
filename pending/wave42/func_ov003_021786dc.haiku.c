#include "ffc/types.h"

extern uint8_t data_0209dea8;
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void func_ov003_021785a0(void *obj);

void func_ov003_021786dc(uint8_t *p, uint32_t idx, int32_t x, int32_t y, uint8_t flag)
{
    int32_t skip = 0;
    void *obj;
    int32_t *px = &x;
    int32_t *py = &y;

    if (p[0xc6] != 0) {
        uint32_t hi = (uint32_t)(func_0209a76c(data_0209dea8 - 1, 3) >> 32);
        if (((hi + 2) & 2) == idx) {
            if (*py <= skip) {
                skip = 1;
            }
        }
        if (skip != 0) {
            *py = 0;
        }
    }

    *(int32_t *)(p + idx * 8 + 0x9c) = *px;
    *(int32_t *)(p + idx * 8 + 0xa0) = *py;

    obj = *(void **)(p + 0x8c + idx * 4);
    if (obj != 0 && flag != 0) {
        void **vt = *(void ***)obj;
        if (((int32_t (*)(void *))vt[12])(obj) != 0) {
            vt = *(void ***)obj;
            ((void (*)(void *))vt[10])(obj);
        }
        vt = *(void ***)obj;
        ((void (*)(void *, int32_t, int32_t))vt[3])(obj, *px >> 12, *py >> 12);
        func_ov003_021785a0(obj);
    }
}
