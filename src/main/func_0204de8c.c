#include "ffc/types.h"

extern void func_0204dca8(void);
extern uint32_t data_02139d6c;

void func_0204de8c(void)
{
    if (data_02139d6c != 0) {
        func_0204dca8();
    }
    data_02139d6c = 0;
}
