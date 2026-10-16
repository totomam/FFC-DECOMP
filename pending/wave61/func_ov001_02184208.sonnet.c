#include "ffc/types.h"
extern int32_t func_02165588(void *a);
extern int32_t func_02092948(void *a, void *b);
extern int32_t *func_0214ee74(void *a);
extern uint8_t data_ov001_02193768[];
int func_ov001_02184208(void *a, uint32_t port0, uint8_t *p, int32_t **out)
{
    int32_t **r4 = 0; uint16_t port = (uint16_t)port0;
    p[1] = 2;
    p[2] = 0; p[3] = 0; p[0] = 0;
    p[4] = 0; p[5] = 0; p[6] = 0; p[7] = 0;
    *(uint16_t *)(p + 2) = (uint16_t)(((port >> 8) & 0xff) | ((port << 8) & 0xff00));
    if (a == 0) *(int32_t *)(p + 4) = 0;
    else *(int32_t *)(p + 4) = func_02165588(a);
    if (*(int32_t *)(p + 4) == -1) {
        if (func_02092948(a, data_ov001_02193768) != 0) {
            r4 = (int32_t **)func_0214ee74(a);
            if (r4 == 0) return 0;
            *(int32_t *)(p + 4) = ***(int32_t ***)((uint8_t *)r4 + 0xc);
        }
    }
    if (out != 0) *out = (int32_t *)r4;
    return 1;
}
