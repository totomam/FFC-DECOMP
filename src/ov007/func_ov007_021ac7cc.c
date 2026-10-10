#include "ffc/types.h"

extern void func_ov007_021ac294(uint32_t x, uint8_t y);

void func_ov007_021ac7cc(uint8_t *p)
{
    func_ov007_021ac294(*(uint32_t *)(p + 0xe4), p[0xf4]);
}
