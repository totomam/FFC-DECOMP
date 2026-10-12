#include "ffc/types.h"

extern void func_02059a78(uint32_t a, uint32_t b);
extern void func_0205847c(uint32_t a, uint32_t b);
extern void func_02059924(uint32_t a, uint32_t b);
extern void func_0205d620(void *p);
extern void func_02062868(void *p);
extern uint8_t data_020b0fd8;

void *func_0205e120(void *self) {
    uint32_t *p = (uint32_t *)self;
    uint32_t *q;
    uint32_t r5;
    uint32_t f24 = p[9];
    p[0] = (uint32_t)&data_020b0fd8;
    q = (uint32_t *)p[7];
    r5 = q[5];
    func_02059a78(r5, f24);
    func_0205847c(p[11], p[12]);
    func_02059924(r5, p[8]);
    func_0205d620(&p[13]);
    func_02062868(self);
    return self;
}
