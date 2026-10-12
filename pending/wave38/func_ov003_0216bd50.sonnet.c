#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_ov003_021656ec(void *obj, void *a, uint16_t x, uint16_t y,
                                uint32_t c, uint32_t d, uint32_t e, uint32_t f,
                                uint16_t g, uint32_t h, uint32_t flag);

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
    uint32_t w20;
} Blk;

void func_ov003_0216bd50(void *a, uint8_t *p)
{
    Blk *q = (Blk *)(p + *(uint32_t *)(p + 8));
    uint32_t w0 = q->w0;
    uint32_t w4 = q->w4;
    uint32_t flag = (q->w8 == 1);
    uint32_t wc = q->wc;
    uint32_t w1c = q->w1c;
    uint32_t w10 = q->w10;
    uint32_t w18 = q->w18;
    uint32_t w14 = q->w14;
    uint32_t w20 = q->w20;
    void *obj = func_0205681c(0xa0);
    if (obj != 0) {
        func_ov003_021656ec(obj, a, (uint16_t)w0, (uint16_t)w4,
                            wc, w10, w18, w14,
                            (uint16_t)w1c, w20, flag);
    }
}
