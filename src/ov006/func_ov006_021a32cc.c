#include "ffc/types.h"

extern uint32_t data_ov006_021bb170[];
extern void *func_020903cc(void *object, uint32_t a, uint32_t b);

void *func_ov006_021a32cc(uint32_t x, uint32_t y)
{
    uint32_t n = x * y;
    void *(*fn)(uint32_t) = (void *(*)(uint32_t))data_ov006_021bb170[1];
    void *p = fn(n);
    if (p != 0) {
        func_020903cc(p, 0, n);
    }
    return p;
}
