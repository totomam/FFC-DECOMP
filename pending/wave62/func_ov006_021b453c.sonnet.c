#include "ffc/types.h"
extern uint8_t *data_ov006_021bc820;
extern uint32_t func_020783a4(void *p);
extern int8_t *func_020783d0(void *p, uint32_t c);
extern void func_ov006_021b4510(int a, int b, int c, int d, uint32_t e, int f);
void func_ov006_021b453c(int a, int b, int c, int d, int step, uint16_t *s, uint32_t idx)
{
    for (; *s != 0; s++, b += step) {
        uint8_t *t = data_ov006_021bc820;
        uint32_t g = func_020783a4(t + idx * 8);
        int8_t *r;
        if (g == 0xffff) g = (*(uint16_t **)(t + idx * 8))[1];
        r = func_020783d0(t + idx * 8, g);
        func_ov006_021b4510(a, b + ((step - r[2]) >> 1), c, d, *s, idx);
    }
}
