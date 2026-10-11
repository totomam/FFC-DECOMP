#include "ffc/types.h"

extern void *func_020095b8(void *p, uint32_t x);
extern void *func_ov005_02197d74(void *a, void *b, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern uint32_t data_ov005_021993f4[];
extern char data_ov005_0219951c[];

void *func_ov005_02197d2c(void *r0, void *r1, uint32_t r2, uint32_t r3)
{
    uint32_t buf[3];
    uint64_t v;
    func_020095b8(buf, r2);
    v = *(uint64_t *)&data_ov005_021993f4[4];
    func_ov005_02197d74(r0, r1, buf, (uint32_t)v, (uint32_t)(v >> 32), r3);
    func_020059cc(buf);
    ((void **)r0)[0] = data_ov005_0219951c;
    return r0;
}
