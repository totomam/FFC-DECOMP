#include "ffc/types.h"

extern void *func_02056aec(void);
extern void *func_0203b708(int x);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b603c(uint8_t *p)
{
    uint32_t *n = *(uint32_t **)(p + 0x138);
    void *t;
    void *v;

    n[0] = 0x5f5e100;
    n[1] = 0;
    t = func_02056aec();
    v = func_0203b708(0x1e);
    p += 0x14;
    func_02056bc0(p, v);
    func_02056bc0(p, t);
}
