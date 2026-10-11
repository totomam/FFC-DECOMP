#include "ffc/types.h"

extern int32_t func_ov001_02181b2c(void *p);
extern int32_t func_ov001_02180870(void *p, int32_t a, int32_t b);

int32_t func_ov001_021808d8(void *p)
{
    if (func_ov001_02181b2c(p) != 0) {
        return func_ov001_02180870(p, 1, 4);
    }
    return 0;
}
