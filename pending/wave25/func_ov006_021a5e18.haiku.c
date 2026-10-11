#include "ffc/types.h"

extern void *data_ov006_021bc700;
extern void *func_ov006_021b3bf8(void *p, int x);
extern void func_ov006_021a5b40(int a, int b);
extern void func_ov006_021b5770(void *p, void *fn);
extern void func_ov006_021a5e54(void);
extern void func_ov006_021a5e54_unused(void *q);

void func_ov006_021a5e18(void *a)
{
    uint32_t pad[2];
    uint32_t t;
    uint8_t v;
    int r5;
    t = *(uint32_t *)func_ov006_021b3bf8(*(void **)((char *)data_ov006_021bc700 + 0x40), 0);
    v = (uint8_t)t;
    r5 = v + 0xc;
    func_ov006_021a5b40(4, r5);
    if (r5 >= 0xc0) {
        func_ov006_021b5770(a, (void *)func_ov006_021a5e54);
    }
    func_ov006_021a5e54_unused(pad);
}
