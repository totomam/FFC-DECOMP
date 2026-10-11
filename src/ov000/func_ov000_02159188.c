#include "ffc/types.h"

extern int func_ov000_02159154(int, uint32_t);
extern uint32_t data_ov000_0217002c[];

int func_ov000_02159188(int a, uint32_t b, int c) {
    int r = ((int (*)(int, uint32_t, int))data_ov000_0217002c[1])(a, b + 0x20, c);
    if (r == 0) {
        return 0;
    }
    return func_ov000_02159154(r, b);
}
