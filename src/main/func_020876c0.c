#include "ffc/types.h"

extern uint32_t func_02088978(void *p);
extern void func_020877d4(void *list, void *node);
extern void func_0208898c(uint32_t x);
extern uint32_t data_02141510[];

int func_020876c0(void *a) {
    uint32_t *p = (uint32_t *)a;
    uint32_t r4 = func_02088978(a);
    uint32_t v = data_02141510[1];
    int ret;
    if (p[2] == 0) {
        uint32_t t = (p[3] & 0xffffffu) | (1u << 28);
        uint32_t hi = t & 0xff000000u;
        p[3] = hi | ((t + 1) & 0xffffffu);
        p[2] = v;
        func_020877d4((void *)v, a);
        ret = 1;
    } else if (p[2] == v) {
        uint32_t w = p[3];
        p[3] = (w & 0xff000000u) | ((w + 1) & 0xffffffu);
        ret = 1;
    } else {
        ret = 0;
    }
    func_0208898c(r4);
    return ret;
}
