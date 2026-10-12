#include "ffc/types.h"

typedef struct { uint32_t p0, p1, p2; void (*fn)(void); uint32_t pad[17]; uint32_t f54; } G;
extern uint32_t func_ov006_021a023c(void);
extern void func_020871d8(uint32_t x);
extern uint32_t func_ov006_021a0460(void);
extern G data_ov006_021bb170;

uint32_t func_ov006_021a0578(void)
{
    uint32_t r5 = 1;
    if (func_ov006_021a023c() != 0) {
        uint32_t z;
        int a = 0;
        uint32_t t = 10;
        z = a;
        do {
            uint32_t r0;
            func_020871d8(t);
            while ((r0 = func_ov006_021a0460()) != 0) {
                if (r0 == 0x14) r5 = a;
                else if (r0 != 4 && r0 != 5) r5 = z;
            }
        } while (r5 != 0);
    }
    if (data_ov006_021bb170.f54 != 0) {
        data_ov006_021bb170.fn();
        data_ov006_021bb170.f54 = 0;
    }
    return 1;
}
