#include "ffc/types.h"

extern void func_0208ceec(void);
extern uint32_t func_0208cf38(int a, int b);
extern void func_0208cdd8(int a, int b);
extern int func_0208cea4(void *p, int n);

typedef struct {
    uint16_t cmd;
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint16_t d;
} Pkt;

int func_0208ea9c(int a, uint16_t b, uint16_t c, uint16_t d, uint16_t e) {
    Pkt p;
    int r;

    func_0208ceec();
    r = (int)func_0208cf38(1, 2);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(0x1e, a);
    p.cmd = 0x1e;
    p.a = b;
    p.b = c;
    p.c = d;
    p.d = e;
    r = func_0208cea4(&p, 10);
    if (r != 0) {
        return r;
    }
    return 2;
}
