#include "ffc/types.h"

extern int32_t func_ov006_0219f090(void *p);
extern void func_ov006_0219ed94(void *a, int32_t b, void *c, int32_t d);
extern int32_t func_ov006_0219ef3c(void *a, void *b, int32_t c);
extern int32_t func_ov006_0219f078(uint16_t v);
extern uint8_t data_ov006_021b8b8c[];

int32_t func_ov006_0219e220(void *a, void *b)
{
    int32_t r = 0;
    int32_t x = func_ov006_0219f090(data_ov006_021b8b8c);
    func_ov006_0219ed94(b, 8, data_ov006_021b8b8c, x);
    if (func_ov006_0219ef3c(a, b, 6) != 0) {
        r -= 1;
    } else {
        int32_t s = func_ov006_0219f078(((uint16_t *)a)[3]);
        int32_t t = func_ov006_0219f078(((uint16_t *)b)[3]);
        if (s + 1 != t) {
            r -= 2;
        }
    }
    return r;
}
