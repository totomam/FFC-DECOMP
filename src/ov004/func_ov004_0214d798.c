#include "ffc/types.h"

extern char data_ov004_02159438[];
extern void func_02056858(void *p);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov004_0214d798(void *p)
{
    int i;
    uint32_t *w = (uint32_t *)p;

    *(char **)p = data_ov004_02159438;
    for (i = 0; i < 2; i++) {
        if (w[0x26 + i] != 0) {
            func_02056858((void *)w[0x26 + i]);
            w[0x26 + i] = 0;
        }
    }
    func_02056db0(p);
    func_02056844(p);
    return p;
}
