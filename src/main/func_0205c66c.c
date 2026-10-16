#include "ffc/types.h"
extern void func_0205bee8(void);
extern void *func_0205681c(uint32_t n);
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);
extern uint32_t data_0213e110;
extern uint32_t data_020b0e2c;
extern uint8_t data_020ab220[];
void func_0205c66c(uint32_t *p, uint32_t n) {
    void *m;
    if (!(data_0213e110 & 1)) {
        data_020b0e2c = 0x3ffffffe;
        data_0213e110 |= 1;
    }
    if (n > data_020b0e2c) func_0205bee8();
    m = func_0205681c((n + 1) * 4);
    if (m == 0) {
        func_02091a24(data_020ab220);
        func_0208f42c();
    }
    p[0] = (uint32_t)m;
    p[3] = n + 1;
}
