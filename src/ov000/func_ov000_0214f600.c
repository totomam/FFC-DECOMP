#include "ffc/types.h"

extern void func_ov000_0214f67c(void *a, void *b);
extern void func_ov000_0214f618(void *a, void *b);

void func_ov000_0214f600(void *a, void *b)
{
    if (a == 0 || b == 0) {
        func_ov000_0214f67c(a, b);
        return;
    }
    func_ov000_0214f618(a, b);
}
