/* cflags: -lang c++ */
#include "ffc/types.h"
extern "C" {
extern uint32_t data_020ad854;
extern void func_02025bcc(void);
extern void func_02025bc0(void);
extern uint32_t func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void (*d)(void), void (*e)(void));
struct Q { uint32_t x, y, z; };
struct S {
    uint32_t vt; uint32_t pad[12];
    uint32_t a34, a38; Q q; uint32_t a48, a4c;
};
S *func_02025b7c(S *p) {
    p->vt = (uint32_t)&data_020ad854;
    p->a34 = 0;
    p->a38 = 0;
    Q *q = &p->q;
    q->x = 0;
    q->y = 0;
    q->z = 0;
    uint32_t n = 0x20;
    p->a4c = n;
    p->a48 = func_0209cec8(n * 0x20, 0xc, 8, func_02025bc0, func_02025bcc);
    return p;
}
}
