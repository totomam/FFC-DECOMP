#include "ffc/types.h"

extern uint32_t data_02141364;
extern void func_0207fd30(uint32_t);
extern void func_0207eb4c(void);

void func_0207fe54(uint32_t a)
{
    if (data_02141364 == 0) {
        data_02141364 = 1;
        func_0207fd30(a);
        func_0207eb4c();
    }
}
