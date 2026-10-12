#include "ffc/types.h"

extern uint8_t *func_0208ceec(void);
extern int func_0208cf38(int a, int b, int c);
extern void func_02087874(uint8_t *p, int n);
extern void func_0208cdd8(int a, uint32_t b);
extern int func_0208ce30(int a, int b, uint32_t c);

int func_0208dca0(uint32_t a0, uint32_t a1)
{
    uint8_t *o;
    int r;
    uint8_t *base;

    o = func_0208ceec();
    r = func_0208cf38(2, 7, 9);
    if (r != 0) {
        return r;
    }
    base = *(uint8_t **)(o + 4);
    func_02087874(base + 0x182, 2);
    base = *(uint8_t **)(o + 4);
    if (((*(uint16_t *)(base + 0x182)) & a1) & 0xfffe) {
        goto blk;
    }
    return 7;
blk:
    func_0208cdd8(0xd, a0);
    r = func_0208ce30(0xd, 1, a1);
    if (r != 0) {
        return r;
    }
    return 2;
}
