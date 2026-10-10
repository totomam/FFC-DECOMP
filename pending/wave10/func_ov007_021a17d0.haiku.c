#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_0203b708(int id);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021a17d0(uint8_t *self, void *r1)
{
    void *r5;
    void *n;
    uint8_t *p;

    *(void **)(*(void **)(self + 0xd8)) = r1;
    r5 = func_02056aec(self);
    n = func_0203b708(0x1e);
    p = self + 0x14;
    func_02056bc0(p, n);
    func_02056bc0(p, r5);
}
