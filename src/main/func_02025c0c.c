#include "ffc/types.h"

extern uint32_t data_020ad854[];
extern void func_02025c48(void *self);
extern void func_0209d06c(void *p, uint32_t a, uint32_t b, void *fn);
extern void func_02025bcc(void);
extern void func_02027524(void *p);
extern void func_02056844(void *p);

void *func_02025c0c(void *self)
{
    uint32_t *s = (uint32_t *)self;
    s[0] = (uint32_t)data_020ad854;
    func_02025c48(self);
    if (s[0x48 / 4] != 0) {
        func_0209d06c((void *)s[0x48 / 4], 0xc, 8, (void *)func_02025bcc);
        s[0x48 / 4] = 0;
    }
    func_02027524((char *)self + 0x3c);
    func_02056844(self);
    return self;
}
