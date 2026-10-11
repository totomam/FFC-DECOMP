#include "ffc/types.h"

extern int32_t func_ov001_02186c3c(void *p);
extern void func_ov001_02186ce4(void *p);

void func_ov001_021867ac(uint8_t *p)
{
    int32_t r = func_ov001_02186c3c(p + 0x60);
    if (r == -1) {
        return;
    }
    p += 0x60;
    func_ov001_02186ce4(p);
}
