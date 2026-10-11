#include "ffc/types.h"

extern int func_02005fd0(void *p);
extern void func_0207ad00(void *p, int n);
extern void func_02005f88(void *p, int n);

void func_02007a90(uint8_t *p, int idx)
{
    if (idx < func_02005fd0(p + 0x48)) {
        func_0207ad00(*(void **)(p + 4), idx + 1);
        func_02005f88(p + 0x48, idx);
    }
}
