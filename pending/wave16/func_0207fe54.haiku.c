#include "ffc/types.h"

extern uint32_t data_02141364;
extern void func_0207fd30(void);
extern void func_0207eb4c(void);

void func_0207fe54(void)
{
    uint32_t *p = &data_02141364;
    if (*p == 0) {
        *p = 1;
        func_0207fd30();
        func_0207eb4c();
    }
}
