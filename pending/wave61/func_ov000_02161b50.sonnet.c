/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
extern void func_ov000_0215dbd8(int a, int b);
int func_ov000_02161b50(int x) {
    if (x == 0) return 0;
    switch (x) {
    case 1: return 1;
    case 2: return 2;
    case 3: return 3;
    default:
        if (6 != 0) func_ov000_0215dbd8(6, 0xfffeb007);
        break;
    }
    return x;
}
