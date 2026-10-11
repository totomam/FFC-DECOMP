#include "ffc/types.h"

extern void *data_ov006_021bc6a8;
extern void func_ov006_021b3dc8(void *a, int b, uint32_t *c, uint32_t *d);
extern void func_ov006_021a37b8(uint32_t a);
extern void func_ov006_021b5770(void *a, void *b);
extern void func_ov006_021a39b4(void);

void func_ov006_021a3978(void *param)
{
    int32_t x;
    int32_t y;
    void *p;

    p = *(void **)&data_ov006_021bc6a8;
    func_ov006_021b3dc8(*(void **)((uint8_t *)p + 8), 0, (uint32_t *)&x, (uint32_t *)&y);
    y += 4;
    func_ov006_021a37b8(y);
    if (y >= 0xc0) {
        func_ov006_021b5770(param, (void *)func_ov006_021a39b4);
    }
}
