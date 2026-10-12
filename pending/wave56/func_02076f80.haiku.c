#include "ffc/types.h"

extern uint32_t func_0207587c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i);
extern uint32_t func_020757e0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020b28d4[2];

uint32_t func_02076f80(void *self)
{
    uint8_t *p = (uint8_t *)self;
    uint32_t r;
    uint32_t bit;
    uint32_t r1;
    uint32_t r2;
    uint32_t val;
    uint32_t a5, a6;
    void *obj;
    uint32_t res;

    if (*(uint32_t *)(p + 0x98) == 3) {
        a6 = *(uint32_t *)(p + 0xb0);
        (void)*(volatile uint32_t *)(p + 0x80);
        r = func_0207587c(*(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x84), 0, 0, 0, 0, 0, 0, a6);
    } else {
        bit = (*(uint32_t *)(p + 0x9c) << 31) >> 31;
        if (bit) {
            r1 = 0;
        } else {
            r1 = 1;
        }
        if (r1 != 0) {
            val = ((uint32_t)*(uint8_t *)(p + 0x9c) << 24) >> 25;
        } else {
            val = *(uint32_t *)(p + 0xa0);
        }
        if (val == 0) {
            r2 = 0;
        } else if (r1 != 0) {
            r2 = (uint32_t)(p + 0x9d);
        } else {
            r2 = *(uint32_t *)(p + 0xa4);
        }
        a5 = *(uint32_t *)(p + 0xac);
        a6 = *(uint32_t *)(p + 0xb0);
        (void)*(volatile uint32_t *)(p + 0x80);
        r = func_020757e0(*(uint32_t *)(p + 0x88), *(uint32_t *)(p + 0x84), r2, *(uint32_t *)(p + 0xa8), a5, a6);
    }

    obj = *(void **)(p + 0xb4);
    func_02056bc0(obj, (void *)r);

    {
        typedef uint32_t (*vfn_t)(void *);
        void **vt = *(void ***)self;
        res = ((vfn_t)vt[4])(self);
    }
    *(uint32_t *)(p + 0xbc) = res;
    func_02056bc0(*(void **)(p + 0xb8), (void *)res);

    *(uint32_t *)(p + 0x88) = data_020b28d4[0];
    *(uint32_t *)(p + 0x8c) = data_020b28d4[1];
    return 0;
}
