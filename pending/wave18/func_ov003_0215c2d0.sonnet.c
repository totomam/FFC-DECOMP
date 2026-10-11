#include "ffc/types.h"

extern void *func_ov003_021481c0(uint32_t);
extern int func_ov003_021464f4(uint32_t, void *);

int func_ov003_0215c2d0(uint8_t *p)
{
    void *v = func_ov003_021481c0(0xc7);
    if (!v) {
        return 0;
    }
    return func_ov003_021464f4(*(uint32_t *)(p + 0x98), v);
}
