#include "ffc/types.h"
extern void *data_ov006_021bc700;
extern void func_ov006_021a5b40(int a, int b);
extern void func_ov006_021a558c(void);
extern void func_ov006_021b5770(void *a, void (*cb)(void));

void func_ov006_021a5544(void *a)
{
    volatile int t[2];
    uint32_t *q = *(uint32_t **)((uint8_t *)data_ov006_021bc700 + 0x1c);
    uint32_t u = (*q << 24) >> 24;
    int d = u - 12;

    if (d > 0x63) {
        func_ov006_021a5b40(1, d);
        return;
    }
    func_ov006_021a5b40(1, 0x63);
    func_ov006_021a5b40(2, 0xc0);
    func_ov006_021b5770(a, func_ov006_021a558c);
    t[0] = 0;
}
