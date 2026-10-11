#include "ffc/types.h"

extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void (*f)(void));
extern void func_02037b90(void);
extern void func_020367a8(void *p);
extern void func_ov001_0218c30c(void);
extern void func_ov001_0218e0a8(void *p);

void *func_ov001_0218da54(uint8_t *p)
{
    func_0209d02c(p + 0xB60, 2, 0x16 << 4, func_02037b90);
    func_020367a8(p + 0x67C);
    func_0209d02c(p + 0xBC, 2, (0xB60 >> 2), func_ov001_0218c30c);
    func_ov001_0218e0a8(p);
    return p;
}
