#include "ffc/types.h"

extern int data_020ae618;
extern void func_02091a24(int *p);
extern uint32_t func_0208f42c(void);

void func_02035ba4(uint32_t *p, uint32_t n, uint32_t flag) {
    uint32_t bit;
    if (n >= 1) {
        func_02091a24(&data_020ae618);
        func_0208f42c();
    }
    bit = 1u << n;
    if (flag) {
        *p |= bit;
    } else {
        *p &= ~bit;
    }
}
