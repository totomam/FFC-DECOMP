#include "ffc/types.h"

extern void func_0204dec8(void *a, uint32_t b, int32_t c);
extern void func_ov000_0214ee64(int32_t a, int32_t b);
extern void func_0204ded0(void *a);

void func_0204ac38(void *a, uint32_t b, int32_t c)
{
    func_0204dec8(a, b, c);
    if (c >= 0) {
        func_ov000_0214ee64(c, 2);
    }
    func_0204ded0(a);
}
