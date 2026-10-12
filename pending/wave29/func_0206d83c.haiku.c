#include "ffc/types.h"

extern void func_0206cb44(void *p);
extern void func_0206d890(void);
extern int func_0208db80(void *fn, void *obj, uint32_t r2, int flag, int zero);

void func_0206d83c(uint8_t *r0, uint32_t r1, uint32_t r2)
{
    uint8_t *p = r0;
    uint32_t **tbl;
    uint8_t *q;
    int ret;

    *(p + 0x30b4) = 0;
    *(p + 0xf93) = 0;
    tbl = *(uint32_t ***)(p + 0x3210);
    if (tbl[r1] == 0) {
        func_0206cb44(p);
        return;
    }
    q = *(uint8_t **)(p + 0x320c);
    ret = func_0208db80((void *)func_0206d890, q + r1 * 0xc0, r2, 1, 0);
    if (ret != 2) {
        func_0206cb44(p);
    }
}
