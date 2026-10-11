#include "ffc/types.h"

extern void func_0209d02c(void *base, int count, int size, void (*fn)(void));
extern void func_020367a8(void *p);
extern void func_ov001_0218c30c(void);
extern void func_ov001_0218e0a8(void *p);
extern void func_02056844(void *p);
extern void func_02037b90(void);

void *func_ov001_0218da98(void *self)
{
    uint8_t *s = (uint8_t *)self;
    func_0209d02c(s + 0xb60, 2, 0x160, func_02037b90);
    func_020367a8(s + 0x67c);
    func_0209d02c(s + 0xbc, 2, 0x2d8, func_ov001_0218c30c);
    func_ov001_0218e0a8(self);
    func_02056844(self);
    return self;
}
