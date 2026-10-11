#include "ffc/types.h"

extern int32_t func_020075fc(void *p);
extern int32_t func_0200764c(void *p);

int32_t func_02007654(void *p)
{
    if (func_020075fc(p)) {
        return func_0200764c(p);
    }
    return 0;
}
