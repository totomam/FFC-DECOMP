#include "ffc/types.h"

extern uint32_t func_02092948(uint32_t a, uint32_t b);

uint32_t func_ov001_0217c9fc(void *a, uint32_t *p, uint32_t *s)
{
    uint32_t *q = (uint32_t *)p[4];
    if (q != 0) {
        if (func_02092948(s[0], q[0]) == 0) {
            if (func_02092948(s[1], q[2]) == 0) {
                *(uint32_t *)s[2] = (uint32_t)p;
                s[3] = 1;
                return 0;
            }
        }
    }
    return 1;
}
