#include "ffc/types.h"

extern void func_ov000_0215a2b4(void);
extern int32_t func_ov001_02175a94(void *a, int32_t b, int32_t c, int32_t d, void (*e)(void), int32_t f);

int32_t func_ov000_02159904(void *a, int32_t *p)
{
    func_ov001_02175a94(a, *p, 0, 0, func_ov000_0215a2b4, 0);
    return 1;
}
