#include "ffc/types.h"

extern int32_t func_020874ac(uint32_t a, uint32_t b, int32_t c);
extern void func_02088f30(void);

void func_020861e8(uint32_t a, uint32_t b)
{
    if (func_020874ac(b, a, 0) == 0) {
        func_02088f30();
    }
}
