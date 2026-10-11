#include "ffc/types.h"

extern void func_020799bc(uint32_t a, uint32_t b);
extern void func_02079838(uint32_t a, uint32_t b);

void func_02006844(uint8_t *p)
{
    if (*p) {
        func_020799bc(0, 1);
        func_020799bc(1, 1);
        func_02079838(2, 0);
        func_02079838(3, 0);
        func_020799bc(4, 1);
    }
}
