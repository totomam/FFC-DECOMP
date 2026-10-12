#include "ffc/types.h"

extern int32_t func_02089218(int32_t a, void *b, int32_t c);
extern void WaitByLoop(int32_t n);

void func_0208ecc8(void *p)
{
    if (func_02089218(13, p, 0)) {
        do {
            WaitByLoop(1);
        } while (func_02089218(13, p, 0));
    }
}
