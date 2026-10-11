#include "ffc/types.h"

extern int8_t data_ov001_021906f4[];
extern int func_02091c0c(int);
extern uint64_t func_0209a978(int, int);

void func_ov001_02178be8(int8_t *out, int n)
{
    int i;
    int v = (int)out;
    for (i = 0; i < n; i++) {
        uint64_t r;
        v = func_02091c0c(v);
        r = func_0209a978(v, 0x3e);
        v = data_ov001_021906f4[(uint32_t)(r >> 32)];
        out[i] = v;
    }
    out[i] = 0;
}
