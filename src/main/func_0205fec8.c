#include "ffc/types.h"

extern uint8_t data_020b112c;
extern int func_02057db4(void *p);
extern void func_02088f30(void);
extern void func_02057d44(void *p);

void *func_0205fec8(void *p)
{
    void *r4 = p;
    *(void **)r4 = &data_020b112c;
    if (func_02057db4(p) == 0) {
        func_02088f30();
    }
    func_02057d44(r4);
    return r4;
}
