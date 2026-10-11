#include "ffc/types.h"

extern int32_t func_ov001_02172654(void *a);
extern void func_ov001_02173a60(void);
extern int32_t func_ov001_02173594(void *b);

int32_t func_ov001_021735b0(void *a, void *b)
{
    if (func_ov001_02172654(a) != 0) {
        func_ov001_02173a60();
    }
    return func_ov001_02173594(b);
}
