#include "ffc/types.h"

typedef struct {
    uint32_t *p;
    volatile uint8_t f;
} Frame;

extern void func_0208763c(uint32_t *p);
extern void func_02087d44(uint32_t a, uint32_t b, uint32_t c);
extern void func_02087678(uint32_t *p);
extern uint32_t data_02139d44[];

uint32_t func_02049938(uint32_t x) {
    uint32_t *r4;
    Frame s;
    uint8_t *g = (uint8_t *)data_02139d44;

    if (g[0]) {
        r4 = (uint32_t *)data_02139d44[1];
        if (r4[0] <= x && r4[0] + r4[1] > x) {
            s.p = r4 + 3;
            s.f = 1;
            if (s.f) {
                func_0208763c(s.p);
            }
            func_02087d44(0, r4[2], x);
            if (s.f) {
                func_02087678(s.p);
            }
            return 1;
        }
        return 0;
    }
    return 0;
}
