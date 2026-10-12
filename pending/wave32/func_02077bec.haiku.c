#include "ffc/types.h"

extern void func_02077a7c(void *dst, uint32_t n);
extern void func_02077bd0(void *p);
extern void func_02077aa4(void *a, void *b);
extern uint32_t data_0213e200;
extern uint8_t data_0213e204[];

void func_02077bec(void *p, uint32_t a, uint32_t b, uint32_t c, uint16_t d) {
    uint32_t *w = (uint32_t *)p;
    uint32_t t = 0;
    w[0] = a;
    w[6] = b;
    w[7] = c;
    t &= ~0xffu;
    w[8] = t | (uint8_t)d;
    func_02077a7c((uint8_t *)p + 0xc, 4);
    if (data_0213e200 == 0) {
        func_02077a7c(data_0213e204, 4);
        data_0213e200 = 1;
    }
    func_02077bd0(p);
    func_02077aa4(p, p);
}
