#include "ffc/types.h"
extern void *func_0205681c(uint32_t n);
extern void func_0206aa58(void *p, int v, uint32_t n);
extern uint32_t data_020af57c;
typedef struct { uint32_t x, y; } P;
void *func_02043f40(uint32_t a, P q, uint32_t d, uint32_t e) {
    uint32_t *p = (uint32_t *)func_0205681c(0x48);
    if (p != 0) {
        func_0206aa58(p, 0, e);
        p[0] = (uint32_t)&data_020af57c;
        p[0x38/4] = a;
        *(P*)(p+0x3c/4) = q;
        p[0x44/4] = d;
    }
    return p;
}
