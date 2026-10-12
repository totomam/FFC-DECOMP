#include "ffc/types.h"

extern uint32_t func_ov006_0219cedc(int32_t v);
extern void func_ov006_0219ceec(uint32_t p);
extern void func_ov006_0219ee10(int32_t i, uint32_t h, int32_t v, uint32_t c, uint32_t d);
extern void func_ov006_0219ee44(uint32_t h, uint32_t a, int32_t v);
extern void func_ov006_0219ee68(uint32_t a, int32_t v, uint32_t t);

int32_t func_ov006_0219ed94(uint32_t a, int32_t b, uint32_t c, uint32_t d)
{
    uint32_t h;
    uint32_t t;
    int32_t i;

    h = func_ov006_0219cedc(b / 2);
    if (h == 0) {
        return -1;
    }
    t = func_ov006_0219cedc(b);
    if (t == 0) {
        func_ov006_0219ceec(h);
        return -1;
    }
    for (i = 0; i < 2; i++) {
        func_ov006_0219ee10(i, h, b, c, d);
        func_ov006_0219ee44(h, a, b);
        func_ov006_0219ee68(a, b, t);
    }
    func_ov006_0219ceec(h);
    func_ov006_0219ceec(t);
    return 0;
}
