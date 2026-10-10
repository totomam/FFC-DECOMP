#include "ffc/types.h"

extern void func_020367a8(void *p);
extern void func_0209d02c(void *p, uint32_t a, uint32_t size, void *fn);
extern void func_020558d8(void *p);
extern void func_ov001_0218e0a8(void *p);
extern void func_ov001_02189ba8(void);

void *func_ov001_0218b704(uint8_t *p)
{
    func_020367a8(p + 0x6cc);
    func_0209d02c(p + 0x104, 2, 0x2d8, (void *)func_ov001_02189ba8);
    func_020558d8(p + 0xb0);
    func_ov001_0218e0a8(p);
    return p;
}
