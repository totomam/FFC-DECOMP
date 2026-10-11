#include "ffc/types.h"

extern uint8_t data_02144c24[];
extern void func_020972c4(void);
extern void func_020972a8(void);

void func_020972cc(void)
{
    if (data_02144c24[1] == 0) {
        func_020972c4();
    }
    data_02144c24[1] = 1;
    func_020972a8();
}
