#include "ffc/types.h"

extern void (*data_02144c04)(int, int, int);
extern void func_020927b8(int, int, int);

void func_020927a0(int a, int b, int c)
{
    if (data_02144c04 != 0) {
        data_02144c04(a, b, c);
        return;
    }
    func_020927b8(a, b, c);
}
