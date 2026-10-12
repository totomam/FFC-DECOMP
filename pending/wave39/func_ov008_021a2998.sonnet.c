#include "ffc/types.h"

extern void func_020694ac(void *obj, uint32_t a, uint32_t b);
extern void func_02053234(void *object);
extern uint8_t data_ov008_021a8b60[];

typedef struct { uint32_t a, b, c; } V3;

void *func_ov008_021a2998(void *obj, uint32_t param)
{
    uint8_t *p = (uint8_t *)obj;
    uint8_t *s7;
    V3 *v;
    uint32_t i;

    func_020694ac(obj, 0, 0);
    *(void **)p = (void *)data_ov008_021a8b60;
    s7 = p + 0xb8;
    func_02053234(s7);
    v = (V3 *)(p + 0xd8);
    v->b = 0;
    v->c = 0;
    ((V3 *)(p + 0xd8))->a = 0;
    ((uint32_t *)s7)[1] = 0;
    s7[0xc] = 0;
    v = (V3 *)(p + 0x108);
    v->a = 0;
    v->b = 0;
    v->c = 0;
    *(uint32_t *)(p + 0x114) = 0;
    *(uint32_t *)(p + 0x118) = 0;
    *(uint32_t *)(p + 0x120) = 0;
    p[0x124] = 0;
    p[0x125] = 0xff;
    p[0x126] = 0;
    *(uint32_t *)(p + 0x12c) = param;
    for (i = 0; i < 8; i++) {
        p[0x100 + i] = (uint8_t)i;
    }
    return obj;
}
