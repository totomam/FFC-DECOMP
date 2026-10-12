#include "ffc/types.h"

extern int func_ov000_02158660(uint8_t *p, int idx, void *c);
extern int func_ov000_02158844(void);

int func_ov000_02158744(uint8_t *a, void **arr, void *c)
{
    int i;
    for (i = 0; i < 4; i++) {
        if (arr[i] != 0) {
            while (func_ov000_02158660(a + (i << 8), i, c) == 0) {
            }
        }
    }
    if (func_ov000_02158844() != 0) {
        return 1;
    }
    return 0;
}
