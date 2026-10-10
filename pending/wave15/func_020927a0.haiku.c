#include "ffc/types.h"

extern void (*data_02144c04)(void);
extern void func_020927b8(void);

void func_020927a0(void)
{
    if (data_02144c04 != 0) {
        data_02144c04();
        return;
    }
    func_020927b8();
}
