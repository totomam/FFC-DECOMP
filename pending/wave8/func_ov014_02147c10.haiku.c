#include "ffc/types.h"

extern uint32_t func_0205da5c(uint32_t);
extern void func_020878ac(uint32_t, uint32_t);
extern void func_020829b8(uint32_t, uint32_t, uint32_t);

void func_ov014_02147c10(uint32_t *p) {
    uint32_t v = func_0205da5c(p[1]);
    func_020878ac(v, p[2]);
    v = func_0205da5c(p[1]);
    func_020829b8(v, 0, p[2]);
}
