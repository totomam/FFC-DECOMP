#include "ffc/types.h"

extern uint32_t func_ov001_021899cc(void);
extern void func_ov001_021899e8(uint8_t *p, void *a, uint32_t n);
extern uint32_t data_ov001_02195798[];

uint8_t *func_ov001_02188b74(void *a) {
    uint32_t n = func_ov001_021899cc();
    void *(*alloc)(uint32_t, uint32_t) = (void *(*)(uint32_t, uint32_t))data_ov001_02195798[1];
    uint8_t *p = (uint8_t *)alloc(n + 1, 4);
    if (p != 0) {
        func_ov001_021899e8(p, a, n);
        p[n] = 0;
    }
    return p;
}
