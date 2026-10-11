#include "ffc/types.h"

extern uint32_t data_ov000_0217004c;
extern int func_ov000_0215aab4(void);
extern int func_ov000_02159a30(int a, int b, void *c);

int func_ov000_0215950c(void *a) {
    int r;
    if (((uint32_t *)&data_ov000_0217004c)[3] == 0 || func_ov000_0215aab4() == 0) {
        return 0;
    }
    if (func_ov000_02159a30(-1, 0, a) == 0) {
        r = 1;
    } else {
        r = 0;
    }
    return r;
}
