#include "ffc/types.h"

extern void func_ov006_0219ef5c(int32_t, int32_t, int32_t);

void func_ov006_0219ee68(int32_t a, int32_t b, int32_t c)
{
    int32_t h = b / 2;
    func_ov006_0219ef5c(c, a + h, h);
    func_ov006_0219ef5c(c + h, a, h);
    func_ov006_0219ef5c(a, c, b);
}
