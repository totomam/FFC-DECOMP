#include "ffc/types.h"
extern int32_t func_ov001_02186c3c(void *p);
extern void func_ov001_02186ce4(void *p);
void func_ov001_021867ac(uint8_t *p)
{
    if (func_ov001_02186c3c(p + 0x60) != -1) {
        func_ov001_02186ce4(p + 0x60);
    }
}
