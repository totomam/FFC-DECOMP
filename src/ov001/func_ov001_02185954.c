#include "ffc/types.h"

extern void func_ov000_02165428(uint32_t v);
extern void func_ov001_02185748(void *p);

void func_ov001_02185954(uint8_t *p)
{
    func_ov000_02165428(*(uint32_t *)(p + 0x20));
    *(int32_t *)(p + 0x20) = -1;
    func_ov001_02185748(p + 0x14);
    func_ov001_02185748(p + 8);
}
