#include "ffc/types.h"

extern int32_t func_02087490(uint32_t a);
extern void func_02088f30(void);
extern void func_021dab0c(uint32_t a, uint32_t b);

void func_0208f3e8(uint32_t a, uint32_t b)
{
    if (func_02087490(a) == 0) {
        func_02088f30();
    }
    func_021dab0c(a, b);
}
