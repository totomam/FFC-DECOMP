#include "ffc/types.h"

extern void func_0203ad70(void *p);
extern uint32_t func_02035ff4(void *object);
extern void func_0203adc8(void *p, void *x, void *y, uint32_t a, uint32_t b, uint32_t c,
                          uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern char data_020ae86c[];

typedef struct {
    uint8_t a;
    uint8_t b[3];
    uint8_t e;
} Arg;

void *func_0203afd0(void *p, void *x, void *y, int z, Arg s)
{
    uint8_t *pa = &s.a;
    func_0203ad70(p);
    *(void **)p = data_020ae86c;
    if (func_02035ff4(x) == 0) {
        x = y;
        y = 0;
        *pa = 0;
    }
    func_0203adc8(p, x, y, 1, z != 0, *pa, 1, 0, z, pa[4]);
    return p;
}
