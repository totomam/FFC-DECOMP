#include "ffc/types.h"

extern void *data_020b8e44;
extern uint8_t *func_020197b4(void *p);

int func_ov009_0219e538(void *a, int unused, int b)
{
    uint8_t *s;
    uint8_t *p = (uint8_t *)a;

    if (b != 0) {
        return 5;
    }
    if (p == 0) {
        return 4;
    }
    s = func_020197b4(data_020b8e44);
    if (s[4] != 0) {
        return 1;
    }
    if (s[8] == 5) {
        if (s[7] != 0) {
            return 3;
        }
        return 2;
    }
    return 0;
}
