#include "ffc/types.h"

extern void func_02037500(uint32_t *p, int8_t v);

void func_0205117c(uint32_t *p, uint8_t *q)
{
    uint8_t *r4;
    uint8_t *end;
    uint16_t v;
    int i;

    for (i = 0; i < 3; i++) {
        p[i] = 0;
    }

    if (q[0] & 1) {
        r4 = *(uint8_t **)(q + 8);
    } else {
        r4 = q + 2;
    }

    while (1) {
        if (q[0] & 1) {
            end = *(uint8_t **)(q + 8) + (*(uint32_t *)(q + 4) << 1);
        } else {
            end = q + 2 + (((uint32_t)q[0] >> 1) & 0x7f) * 2;
        }
        if (r4 == end) {
            break;
        }
        v = *(uint16_t *)r4;
        if (v & 0xff00) {
            func_02037500(p, (int8_t)(v >> 8));
        }
        if (v & 0xff) {
            func_02037500(p, (int8_t)(v & 0xff));
        }
        r4 += 2;
    }
}
