#include "ffc/types.h"

extern void func_020890f8(void);
extern int func_020891f4(int a, int b);
typedef struct { uint32_t a, b; } S;
extern S data_020b2058;

void func_0206ec1c(uint32_t *p) {
    func_020890f8();
    if (func_020891f4(0xf, 1) == 0) {
        p[3] = (p[3] & ~0xffu) | 2;
    } else {
        *(S*)(p + 0x20) = data_020b2058;
    }
}
