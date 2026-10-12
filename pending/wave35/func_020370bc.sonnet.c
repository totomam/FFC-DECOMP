#include "ffc/types.h"

extern int func_02068680(void *p);
extern uint32_t func_02068b30(void *p);
extern void func_02068b70(void *p);

int func_020370bc(void *p) {
    int v = 0;
    int ten = 10;
    while (func_02068680(p) == 0) {
        uint32_t c = func_02068b30(p);
        if (c >= '0' && c <= '9') {
            v = v * ten + (c - '0');
        } else {
            func_02068b70(p);
            break;
        }
    }
    return v;
}
