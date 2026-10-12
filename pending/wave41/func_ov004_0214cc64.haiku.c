#include "ffc/types.h"

extern uint32_t *func_0205681c(uint32_t size);
extern uint32_t func_ov004_0214bb38(uint32_t *obj, uint32_t x, uint32_t y, uint32_t a, uint32_t b, uint32_t c);
extern void func_020695ec(uint8_t *p);
extern void func_0200d5d4(uint32_t *object, uint32_t *value, uint8_t flag);

void func_ov004_0214cc64(uint8_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t val = 0;
    uint32_t *obj = func_0205681c(0xb0);
    if (obj) {
        val = func_ov004_0214bb38(obj, *(uint32_t *)(p + 0xb8), *(uint32_t *)(p + 0xbc), a, b, c);
    }
    func_020695ec(p);
    if (*(uint32_t *)(p + 0xd4) < *(uint32_t *)(p + 0xd8)) {
        uint32_t i = *(uint32_t *)(p + 0xd4);
        *(uint32_t *)(p + 0xd4) = i + 1;
        ((uint32_t *)*(uint32_t **)(p + 0xd0))[i] = val;
    } else {
        uint8_t flag = 0;
        func_0200d5d4((uint32_t *)(p + 0xd0), &val, flag);
    }
    ((uint32_t *)*(uint32_t **)(p + 0xe0))[c] = val;
}
