#include "ffc/types.h"

extern void func_02037648(void *p);
extern void *data_021395b0;

void func_020375bc(void *p)
{
    if (p == 0) {
        func_02037648(data_021395b0);
        return;
    }
    func_02037648(p);
}
