#include "ffc/types.h"

extern uint32_t *func_ov000_02166414(void *p);
extern uint32_t func_ov001_02180818(void *p);
extern uint32_t func_ov001_0218081c(void *p);
extern uint32_t func_ov001_021821ac(uint32_t a, uint32_t b, void *c);
extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, void *d);
extern uint32_t func_ov000_02168768(void *list);
extern uint32_t *func_ov000_0216876c(void *list, uint32_t idx);
extern uint32_t func_ov000_0216888c(uint32_t a, void *b, void *c, uint32_t d, uint32_t e);
extern void func_ov000_02168848(uint32_t a);
extern void func_ov000_02166460(void);
extern uint8_t data_ov000_0216b508[];
extern uint8_t data_ov000_0216b530[];
extern uint8_t data_ov000_0216b56c[];

void func_ov000_021664c4(void *p, uint32_t mode)
{
    uint32_t *obj;
    uint32_t loc[3];
    uint32_t buf[6];
    volatile uint32_t vol;
    int n;
    int i;
    uint32_t *e;
    int z;

    obj = func_ov000_02166414(p);
    if ((uint32_t)(mode - 2) <= 1) {
        mode = 2;
    } else if (mode == 4) {
        mode = 3;
    }

    {
        vol = func_ov001_021821ac(func_ov001_02180818(p), func_ov001_0218081c(p), buf);
    }

    func_ov000_021652a8(12, 0, 16, data_ov000_0216b508);
    n = func_ov000_02168768((void *)obj[2]);
    for (i = 0; i < n; i++) {
        e = func_ov000_0216876c((void *)obj[2], i);
        if (e[9] != 0) {
            func_ov000_021652a8(12, 0, 16, data_ov000_0216b530);
            {
                uint32_t s = func_ov001_02180818(p);
                uint32_t t = func_ov001_0218081c(p);
                ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))e[9])(s, t, mode, e[14]);
            }
        }
    }

    if (obj[5] != 0) {
        func_ov000_021652a8(12, 0, 16, data_ov000_0216b56c);
        {
            uint32_t s = func_ov001_02180818(p);
            uint32_t t = func_ov001_0218081c(p);
            ((void (*)(uint32_t, uint32_t, uint32_t, uint32_t))obj[5])(s, t, mode, obj[11]);
        }
    }

    z = 0;
    loc[2] = (uint32_t)p;
    if ((uint32_t)(z - 1) != func_ov000_0216888c(obj[1], loc, (void *)func_ov000_02166460, z, z)) {
        func_ov000_02168848(obj[1]);
    }
}
