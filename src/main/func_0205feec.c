#include "ffc/types.h"

extern int func_02057db4(void *p);
extern void func_02088f30(void);
extern void func_02057d44(void *p);
extern void func_02056844(void *p);
extern char data_020b112c[];

void *func_0205feec(void *p)
{
    *(uint32_t *)p = (uint32_t)data_020b112c;
    if (func_02057db4(p) == 0) {
        func_02088f30();
    }
    func_02057d44(p);
    func_02056844(p);
    return p;
}
