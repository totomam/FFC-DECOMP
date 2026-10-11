#include "ffc/types.h"

extern int32_t func_02087490(uint32_t a, uint32_t b, uint32_t c);
extern void func_02088f30(void);
extern void func_021dab08(uint32_t a, uint32_t b, uint32_t c);

void func_0208f3c8(uint32_t a, uint32_t b, uint32_t c)
{
    if (func_02087490(a, b, c) == 0) {
        func_02088f30();
    }
    func_021dab08(a, b, c);
}
