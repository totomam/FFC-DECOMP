#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
extern uint32_t func_0203c01c(void *object);
extern uint32_t func_0203b720(void);
extern uint32_t func_0203c044(uint32_t x);
extern uint32_t func_ov011_021c6420(void *object, S s, uint32_t c);
extern void func_02056bc0(void *object, uint32_t node);
extern S data_ov011_021cb8b4;

void func_ov011_021c63c8(uint8_t *p, uint32_t b)
{
    uint32_t r6, r7, r5, r1;
    uint8_t *q;

    if (p[0xe5] != 0) {
        return;
    }
    r6 = func_0203c01c((void *)3);
    r7 = func_0203b720();
    r5 = func_ov011_021c6420(p, data_ov011_021cb8b4, b);
    r1 = func_0203c044(3);
    q = p + 0x14;
    func_02056bc0(q, r1);
    func_02056bc0(q, r5);
    func_02056bc0(q, r7);
    func_02056bc0(q, r6);
}
