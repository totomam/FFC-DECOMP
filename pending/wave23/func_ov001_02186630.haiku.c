#include "ffc/types.h"

extern void func_ov001_02187510(void *p);
extern void func_ov001_02185954(void *p);
extern void func_ov001_02182a18(uint32_t v);
extern void func_ov000_021653f4(void *p);

void func_ov001_02186630(uint8_t *p)
{
    func_ov001_02187510(p + 0x60);
    func_ov001_02185954(p);
    if (*(uint32_t *)(p + 0x850) != 0) {
        func_ov001_02182a18(*(uint32_t *)(p + 0x850));
    }
    func_ov000_021653f4(p);
}
