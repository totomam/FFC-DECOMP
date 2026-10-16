#include "ffc/types.h"
extern uint8_t *func_0207caa4(uint32_t a, uint32_t *p);
int func_0207f9d0(uint32_t a, uint32_t *p) {
    uint8_t *q = func_0207caa4(a, p);
    p[8] = 0; p[9] = 0; p[10] = 0; p[11] = 0;
    p[0] = *(uint32_t*)(q + 0x80);
    p[1] = 0; p[2] = 0; p[3] = 0;
    p[4] = 0x7fffffff; p[6] = 0x7fffffff;
    p[5] = 0; p[7] = 0;
    return 0;
}
