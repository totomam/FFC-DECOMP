#include "ffc/types.h"

extern uint8_t *func_ov000_02164418(void *b);
extern int func_ov000_02163d88(void *b, int a);
extern void func_ov000_02164054(uint8_t *buf, int a, int d);
extern void func_ov000_02164450(void *b, void *p, int n, int flag);
extern int func_ov000_0216498c(void *b);
extern uint8_t *data_ov000_0217096c;

int func_ov000_02163e00(int a, void *b, uint32_t c, int d)
{
    uint8_t buf[8];
    volatile int vd;
    volatile uint32_t vc;
    uint8_t *r4;
    int n;

    vc = c;
    vd = d;
    r4 = func_ov000_02164418(b);
    if (func_ov000_02163d88(b, a) == 0) {
        return 0;
    }
    r4[0x1c] = 1;
    *(uint32_t *)(r4 + 0) = vc;
    *(uint32_t *)(r4 + 0xc) = 0;
    *(int *)(r4 + 0x14) = vd;
    func_ov000_02164054(buf, a, d);
    func_ov000_02164450(b, buf, 8, 1);

    n = *(uint16_t *)(data_ov000_0217096c + 0x720);
    if (vd <= n) {
        n = vd;
    }
    if (n > func_ov000_0216498c(b)) {
        return 1;
    }
    func_ov000_02164450(b, (void *)vc, n, 1);

    *(int *)(r4 + 0xc) += n;
    if (*(int *)(r4 + 0xc) == *(int *)(r4 + 0x14)) {
        r4[0x1c] = 0;
        *(uint32_t *)(r4 + 0) = 0;
        *(uint32_t *)(r4 + 0xc) = 0;
        *(int *)(r4 + 0x14) = 0;
        {
            uint8_t *g = data_ov000_0217096c;
            void (*fp)(int, void *, void *) = *(void (**)(int, void *, void *))(g + 0x700);
            if (fp != 0 && a == 1) {
                fp(vd, b, *(void **)(g + 0x710));
            }
        }
    }
    return 1;
}
