#include "ffc/types.h"

extern void *func_0209ce70(uint32_t size, void *heap);
extern uint32_t data_ov009_021b080c[];
extern uint8_t data_021452e4[];

void func_ov009_021a5d5c(uint32_t *p, int32_t n) {
    void *r;
    p[0] = 0;
    p[1] = data_ov009_021b080c[2];
    while (n > 0) {
        r = func_0209ce70((uint32_t)n << 2, data_021452e4);
        p[0] = (uint32_t)r;
        if (r != 0) {
            p[1] = (uint32_t)n;
            return;
        }
        n = n / 2;
    }
}
