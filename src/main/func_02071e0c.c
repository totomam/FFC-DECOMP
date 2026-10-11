#include "ffc/types.h"

extern void func_ov000_0215525c(void *p);
extern int32_t func_02071e50(void *p);
extern void func_02071e84(void *p);

void func_02071e0c(uint8_t *p)
{
    func_ov000_0215525c(p + 8);
    if (func_02071e50(p) != 0) {
        func_02071e84(p);
    }
}
