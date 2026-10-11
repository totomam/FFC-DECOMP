#include "ffc/types.h"

extern uint32_t sub_02165588(void *p);
extern void *sub_0214ee74(void *p);

uint32_t func_ov001_02183108(void *p)
{
    uint32_t r = sub_02165588(p);
    if (r != 0xFFFFFFFFu) {
        return r;
    }
    void *x = sub_0214ee74(p);
    if (x == 0) {
        return 0;
    }
    uint32_t *a = *(uint32_t **)((uint8_t *)x + 0xc);
    return *(uint32_t *)*a;
}
