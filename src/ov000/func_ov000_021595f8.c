#include "ffc/types.h"

typedef struct Obj {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
    uint32_t w10;
    int32_t count;
    void *ptr;
    uint8_t b[4];
    uint32_t w20[16];
} Obj;

extern uint8_t data_ov000_0217004c[];
extern void func_ov000_02154f6c(void *p, uint32_t v);

#define GP (*(Obj * volatile *)(data_ov000_0217004c + 0xc))

void func_ov000_021595f8(Obj *a, uint32_t b, uint32_t c, void *d, int32_t e)
{
    int32_t i;

    GP = a;
    a->w0 = 0;
    GP->w4 = b;
    GP->w8 = 0;
    {
        Obj *p = GP;
        p->wc = 0;
        p->w10 = 0;
        p->count = e;
    }
    GP->ptr = d;
    GP->b[0] = 0;
    GP->b[1] = 0;
    GP->b[2] = 0;
    GP->b[3] = 0;
    GP->w20[0] = 0;
    GP->w20[1] = 0;
    GP->w20[2] = c;
    GP->w20[3] = 0;
    GP->w20[4] = 0;
    GP->w20[5] = 0;
    GP->w20[6] = 0;
    GP->w20[7] = 0;
    GP->w20[8] = 0;
    GP->w20[9] = 0;
    GP->w20[10] = 0;
    GP->w20[11] = 0;
    GP->w20[12] = 0;
    GP->w20[13] = 0;
    GP->w20[14] = 0;
    GP->w20[15] = 0;

    for (i = 0; i < e; i++) {
        func_ov000_02154f6c((uint8_t *)GP->ptr + i * 12, 0);
    }
}
