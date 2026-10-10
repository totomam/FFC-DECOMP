#include "ffc/types.h"

extern void func_0203764c(void *p);
extern void *data_021395b0;

void func_020375d8(void *p)
{
    if (p == 0) {
        func_0203764c(data_021395b0);
        return;
    }
    func_0203764c(p);
}
