#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern void func_02087058(uint32_t *);
extern void func_0207dc60(uint32_t *);
extern int func_0207df24(uint32_t *, int);
extern void func_0207e040(void);

void func_0207e728(uint32_t *a, uint32_t b) {
    uint32_t *r4 = (uint32_t *)a[2];
    if (r4[3] & 4) {
        uint32_t h = func_02088978();
        r4[3] |= 8;
        r4[5] = b;
        func_02087058(&r4[6]);
        func_0208898c(h);
    } else {
        func_0207dc60(r4);
        if (func_0207df24(a, 1) != 0) {
            func_0207e040();
        }
    }
}
