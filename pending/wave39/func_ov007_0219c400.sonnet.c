#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void func_ov007_0219bedc(void *p);

void func_ov007_0219c400(uint8_t *p)
{
    uint8_t *q;
    uint8_t *s;
    uint32_t *x = *(uint32_t **)(p + 0xe4);
    if (x == 0) {
        return;
    }
    x[3] = (x[3] & ~0xffu) | 2u;
    *(uint32_t *)(p + 0xe4) = 0;
    func_02056c4c(*(void **)(p + 0xc4));
    func_02056c4c(*(void **)(p + 0xc0));
    *(uint32_t *)(p + 0x94) = 0;
    *(uint32_t *)(p + 0x98) = 0;
    q = p + 0xac;
    *q = 0;
    s = p + 0xb4;
    *s = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    q[4] = 0;
    q[5] = 0;
    q[6] = 0;
    q[7] = 0;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    s[5] = 0;
    s[6] = 0;
    s[7] = 0;
    func_ov007_0219bedc(*(void **)(p + 0xe8));
}
