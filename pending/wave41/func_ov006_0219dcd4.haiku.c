#include "ffc/types.h"

extern uint32_t func_ov006_0219f090(void *a);
extern int32_t func_ov006_0219ef3c(void *a, void *b, uint32_t c);
extern uint8_t data_ov006_021b8b80[];

int func_ov006_0219dcd4(uint8_t *p)
{
    int32_t ret = 0;
    int32_t n = 0;
    int32_t count = *(int32_t *)p;
    int32_t i = 0;
    uint8_t *e;
    uint8_t *q;

    if (count == 0) {
        return 5;
    }
    if ((uint32_t)count > 0x40) {
        count = 0x40;
    }
    e = p;
    q = p + 8;
    for (i = 0; i < count; i++) {
        if ((*(uint32_t *)(e + 0x54)) & 1) {
            if (*(uint32_t *)(e + 4) == func_ov006_0219f090(data_ov006_021b8b80)) {
                uint32_t v = func_ov006_0219f090(data_ov006_021b8b80);
                if (func_ov006_0219ef3c(q, data_ov006_021b8b80, v) == 0) {
                    n++;
                }
            }
        }
        e += 0x54;
        q += 0x54;
    }
    if (n > 1) {
        ret = 4;
    }
    if (n == 0) {
        ret = 5;
    }
    return ret;
}
