#include "ffc/types.h"

extern int func_02087490(void);
extern void func_02088f30(void);
extern void func_021daafc(void *p);

void func_0208f3b0(void *p)
{
    if (func_02087490() == 0) {
        func_02088f30();
    }
    func_021daafc(p);
}
