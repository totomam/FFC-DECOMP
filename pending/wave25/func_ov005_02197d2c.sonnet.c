#include "ffc/types.h"
typedef struct { uint32_t a, b; } S;
extern void *func_020095b8(void *p, uint32_t x);
extern void *func_ov005_02197d74(void *a, void *b, void *c, S d, uint32_t f);
extern void *func_020059cc(void *object);
extern S data_ov005_021993f4[];
extern char data_ov005_0219951c[];

void *func_ov005_02197d2c(void *r0, void *r1, uint32_t r2, uint32_t r3)
{
    uint32_t buf[3];
    func_020095b8(buf, r2);
    func_ov005_02197d74(r0, r1, buf, *(S *)((char *)data_ov005_021993f4 + 0x10), r3);
    func_020059cc(buf);
    ((void **)r0)[0] = data_ov005_0219951c;
    return r0;
}
