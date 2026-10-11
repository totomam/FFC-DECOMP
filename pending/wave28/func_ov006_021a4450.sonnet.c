#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021b3dc8(void *a, uint32_t b, int32_t *c, int32_t *d);
extern void func_ov006_021a4b14(uint32_t a, uint32_t b, int32_t c);
extern void func_ov006_021a4da4(void);
extern void func_ov006_021b5770(void *a, void (*f)(void));
extern void func_ov006_021a44a8(void);

void func_ov006_021a4450(void *param)
{
    int32_t y;
    int32_t x;

    func_ov006_021b3dc8(*(void **)(data_ov006_021bc6fc + 0xfc), 0, &y, &x);
    x -= 0xc;
    if (x > 0xaa) {
        func_ov006_021a4b14(data_ov006_021bc6fc[0x11d], 4, x);
    } else {
        func_ov006_021a4b14(data_ov006_021bc6fc[0x11d], 4, 0xaa);
        func_ov006_021a4da4();
        func_ov006_021b5770(param, func_ov006_021a44a8);
    }
}
