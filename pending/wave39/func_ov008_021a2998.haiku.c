#include "ffc/types.h"

extern void func_020694ac(void *obj, uint32_t a, uint32_t b);
extern void func_02053234(void *object);
extern uint8_t data_ov008_021a8b60[];

void *func_ov008_021a2998(void *obj, uint32_t param)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *s7;
    uint32_t *a1;
    uint32_t off;
    uint32_t i;

    func_020694ac(obj, 0, 0);
    *(void **)p = (void *)data_ov008_021a8b60;
    s7 = p + 0xb8;
    func_02053234(s7);
    a1 = (uint32_t *)(p + 0xd8);
    a1[1] = 0;
    a1[2] = 0;
    *(uint32_t *)(p + 0xd8) = 0;
    ((uint32_t *)s7)[1] = 0;
    s7[0xc] = 0;
    off = 0x108;
    ((uint32_t *)(p + off))[0] = 0;
    ((uint32_t *)(p + off))[1] = 0;
    ((uint32_t *)(p + off))[2] = 0;
    *(uint32_t *)(p + off + 0xc) = 0;
    *(uint32_t *)(p + off + 0x10) = 0;
    *(uint32_t *)(p + off + 0x18) = 0;
    p[off + 0x1c] = 0;
    p[0x125] = 0xff;
    p[0x126] = 0;
    *(uint32_t *)(p + 0x12c) = param;
    for (i = 0; i < 8; i++) {
        p[off - 8 + i] = (uint8_t)i;
    }
    return obj;
}
