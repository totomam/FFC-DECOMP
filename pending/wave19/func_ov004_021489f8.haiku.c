#include "ffc/types.h"

extern void func_ov004_02149570(uint32_t arg);
extern void func_ov004_02148fa8(uint32_t arg);
extern void func_ov004_021498d8(uint32_t arg);

void func_ov004_021489f8(uint8_t *p)
{
    func_ov004_02149570(*(uint32_t *)(p + 0x90));
    func_ov004_02148fa8(*(uint32_t *)(p + 0x94));
    func_ov004_021498d8(*(uint32_t *)(p + 0x98));
}
