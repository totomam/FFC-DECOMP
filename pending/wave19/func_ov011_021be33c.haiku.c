#include "ffc/types.h"

extern void func_ov011_021bd4d8(void *p);
extern void func_ov011_021be7b4(void *p);
extern void func_ov011_021beea0(void *p);

void func_ov011_021be33c(uint8_t *p)
{
    func_ov011_021bd4d8(*(void **)(p + 0xbc));
    func_ov011_021be7b4(p);
    *(uint16_t *)(p + 0x122) = 0;
    func_ov011_021beea0(p);
}
