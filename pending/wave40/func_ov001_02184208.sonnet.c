#include "ffc/types.h"

extern uint32_t func_02165588(void *p);
extern void *func_0214ee74(void *p);
extern int func_02092948(void *p, void *q);
extern uint8_t data_ov001_02193768[];

int func_ov001_02184208(void *r0, int r1, uint8_t *r2, void **r3)
{
    void *r4 = (void *)0;
    uint8_t hi;
    int sw;

    r1 = (uint16_t)r1;
    r2[1] = 2;
    hi = (uint8_t)(r1 >> 8);
    sw = (uint16_t)(((r1 << 8) & 0xff00u) | hi);

    r2[2] = 0;
    r2[3] = 0;
    r2[0] = 0;
    r2[4] = 0;
    r2[5] = 0;
    r2[6] = 0;
    r2[7] = 0;
    *(uint16_t *)(r2 + 2) = sw;

    if (r0 == (void *)0) {
        *(uint32_t *)(r2 + 4) = 0;
    } else {
        *(uint32_t *)(r2 + 4) = func_02165588(r0);
    }

    if (*(uint32_t *)(r2 + 4) == 0xFFFFFFFFu) {
        if (func_02092948(r0, data_ov001_02193768) != 0) {
            r4 = func_0214ee74(r0);
            if (r4 == (void *)0) {
                return 0;
            }
            {
                uint32_t *P = *(uint32_t **)((uint8_t *)r4 + 0xc);
                uint32_t *Q = (uint32_t *)*P;
                *(uint32_t *)(r2 + 4) = *Q;
            }
        }
    }

    if (r3 != (void **)0) {
        *r3 = r4;
    }
    return 1;
}
