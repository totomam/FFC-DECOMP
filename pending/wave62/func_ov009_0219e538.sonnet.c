#include "ffc/types.h"
extern uint8_t *func_020197b4(uint32_t x);
extern uint32_t data_020b8e44;
int func_ov009_0219e538(void *a, int b, int c) {
    uint8_t *s; int r = 0;
    void *p = a;
    if (c != 0) return 5;
    if (p == 0) return 4;
    s = func_020197b4(data_020b8e44);
    if (s[4] != 0) return 1;
    if (s[8] == 5) { r = 2; if (s[7] != 0) r = 3; }
    return r;
}
