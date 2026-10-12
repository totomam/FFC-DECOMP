#include "ffc/types.h"

extern uint32_t func_ov006_0219f090(void *a);
extern int32_t func_ov006_0219ef3c(void *a, void *b, uint32_t c);
extern uint8_t data_ov006_021b8b80[];

int func_ov006_0219dcd4(uint8_t *p)
{
    uint32_t s[2];
    int n = 0;
    int i;
    uint8_t *q;

    s[1] = 0;
    s[0] = *(uint32_t *)p;
    if (s[0] == 0) {
        return 5;
    }
    if (s[0] > 0x40) {
        s[0] = 0x40;
    }
    q = p + 8;
    for (i = 0; i < (int)s[0]; i++) {
        if ((*(uint32_t *)(p + 0x54)) & 1) {
            if (*(uint32_t *)(p + 4) == func_ov006_0219f090(data_ov006_021b8b80)) {
                uint32_t v = func_ov006_0219f090(data_ov006_021b8b80);
                if (func_ov006_0219ef3c(q, data_ov006_021b8b80, v) == 0) {
                    n++;
                }
            }
        }
        p += 0x54;
        q += 0x54;
    }
    if (n > 1) {
        s[1] = 4;
    }
    if (n == 0) {
        s[1] = 5;
    }
    return s[1];
}
