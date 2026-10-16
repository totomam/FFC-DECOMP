#include "ffc/types.h"
extern void *func_0205681c(uint32_t n);
extern void *func_0206be34(void *p);
extern void func_02054114(uint32_t a);
extern void *data_0213e170;
void func_0206bef0(void)
{
    void *p = func_0205681c(0x9dc);
    void *q = 0;
    if (p != 0) {
        q = func_0206be34(p);
    }
    data_0213e170 = q;
    func_02054114(0);
}
