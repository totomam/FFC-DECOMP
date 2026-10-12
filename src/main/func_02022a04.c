#include "ffc/types.h"

extern char data_020ad770[];
extern void func_0202f62c(void);
extern uint32_t func_0203c2e4(void);
extern void func_02059b2c(uint32_t, uint32_t);
extern X;
extern void func_02056844(void *);

typedef struct O { void **vt; } O;

void *func_02022a04(uint8_t *s) {
    void *c;
    uint32_t b;
    uint32_t a;
    uint8_t *q;

    *(void **)s = data_020ad770;
    func_0202f62c();
    if (*(O **)(s + 0x21c) != 0) {
        if (*(O **)(s + 0x21c) != 0) {
            ((void (*)(O *))(*(O **)(s + 0x21c))->vt[1])(*(O **)(s + 0x21c));
        }
        *(O **)(s + 0x21c) = 0;
    }
    func_02059b2c(func_0203c2e4(), *(uint32_t *)(s + 0x8c));
    q = s + 0x4c;
    c = q + 4;
    b = *(uint32_t *)(q + 8);
    func_020235ac(&a, q, &b, &c);
    func_02056844(s);
    return s;
}
