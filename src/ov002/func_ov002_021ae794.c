#include "ffc/types.h"

extern void func_020559d4(void *p);
extern void func_ov002_021b0ce0(void *p, int32_t v);
extern void func_ov002_021ae140(void *p);

void func_ov002_021ae794(uint8_t *p)
{
    func_020559d4(p + 0x80);
    func_ov002_021b0ce0(p, 0);
    func_ov002_021ae140(p);
}
