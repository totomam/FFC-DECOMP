#include "ffc/types.h"

extern void func_ov001_021874c4(void *p);
extern void func_ov001_02185940(void *p);

void func_ov001_021867e4(uint8_t *p)
{
    func_ov001_021874c4(p + 0x60);
    func_ov001_02185940(p);
}
