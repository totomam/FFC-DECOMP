#include "ffc/types.h"

extern int func_02089218(int a, void *b, int c);
extern void WaitByLoop(uint32_t n);

int func_0207db94(void *p, uint32_t n) {
    if (func_02089218(14, p, 0)) {
        do {
            WaitByLoop(n);
        } while (func_02089218(14, p, 0));
    }
}
