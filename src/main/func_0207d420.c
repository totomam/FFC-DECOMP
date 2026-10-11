#include "ffc/types.h"

extern void func_02088f30(void);
extern void func_0207d3a0(uint32_t a, uint32_t b, uint32_t c);
extern void func_0207d104(void *p);
extern void func_0207cd00(void (*fn)(void), uint32_t arg);
extern void func_0207d370(void);

void func_0207d420(void *p)
{
    if (p == 0) {
        func_02088f30();
    }
    func_0207d3a0(0, 0, 0);
    func_0207d104(p);
    func_0207cd00(func_0207d370, 0);
}
