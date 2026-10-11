#include "ffc/types.h"

extern int32_t func_ov000_02168768(void *self);
extern void func_ov000_02168848(void *self, int32_t idx);

void func_ov000_02168950(void *self)
{
    int32_t i;
    for (i = func_ov000_02168768(self) - 1; i >= 0; i--) {
        func_ov000_02168848(self, i);
    }
}
