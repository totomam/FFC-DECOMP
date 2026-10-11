#include "ffc/types.h"

extern void func_02056c9c(void *p, int x);
extern int func_ov000_02157f10(void *a, uint32_t b, int c, int d, uint32_t e, int32_t *f);
extern char data_ov007_021c5584[];

uint32_t *func_ov007_021aec28(uint32_t *self, void *p, uint32_t q, uint32_t r, int32_t *s)
{
    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_ov007_021c5584;
    self[32] = (uint32_t)s;
    if (func_ov000_02157f10(p, q, 0, 0, r, s) == 0) {
        *s = -1;
        self[3] = (self[3] & ~0xffu) | 2;
    }
    return self;
}
