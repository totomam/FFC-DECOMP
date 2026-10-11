#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
} Pair;

extern uint8_t func_02036360(const void *object);
extern int32_t func_02036008(const void *object);
extern void func_ov009_02199f24(void *p, uint8_t a, int32_t b);
extern void func_ov009_02199f58(void *p, Pair v);
extern int32_t data_ov009_021b080c[];

void func_ov009_021a4cc8(void *a0, void *obj, Pair xy)
{
    uint8_t c = func_02036360(obj);
    int32_t d = func_02036008(obj);
    Pair v;

    func_ov009_02199f24(*(void **)((uint8_t *)a0 + 0x170), c, d);
    v.a = xy.a + data_ov009_021b080c[0x58 / 4];
    v.b = xy.b + data_ov009_021b080c[0x5c / 4];
    func_ov009_02199f58(*(void **)((uint8_t *)a0 + 0x170), v);
}
