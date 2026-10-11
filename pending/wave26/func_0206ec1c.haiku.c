#include "ffc/types.h"

extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
extern uint32_t data_020b2058[2];

void func_0206ec1c(uint32_t *p) {
    func_020890f8();
    if (func_020891f4(0xf, 1) == 0) {
        p[3] = (p[3] & ~0xffu) | 2;
    } else {
        uint32_t *d = data_020b2058;
        uint32_t a = d[0];
        uint32_t b = d[1];
        p[0x20] = a;
        p[0x21] = b;
    }
}
