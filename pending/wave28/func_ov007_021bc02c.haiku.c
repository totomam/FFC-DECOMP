#include "ffc/types.h"

extern void *func_02056aec(void *obj);
extern void *func_020215a4(int32_t a, int32_t b);
extern void *func_0203b708(int32_t a);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021bc02c(void *a)
{
    uint8_t *p;
    void *r4;
    void *r6;
    void *r1;
    uint8_t *b;

    p = *(uint8_t **)((uint8_t *)a + 0xc0);
    if (p != 0) {
        *p = 1;
    }
    r4 = func_02056aec(a);
    r6 = func_020215a4(-1, 0x19);
    r1 = func_0203b708(0x1e);
    b = (uint8_t *)a + 0x14;
    func_02056bc0(b, r1);
    func_02056bc0(b, r6);
    func_02056bc0(b, r4);
}
