#include "ffc/types.h"

extern uint8_t *func_ov000_0215022c(void *a);
extern int func_0208e018(void *fn, void *a, uint32_t b, uint32_t c);
extern void func_02087024(void *p);
extern void func_ov000_02151418(void);
extern void func_ov000_02151440(void);

int func_ov000_02150894(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint8_t *p;
    void *fn;
    int ret;

    p = func_ov000_0215022c(a);
    if (d == 0) {
        fn = (void *)func_ov000_02151418;
    } else {
        fn = (void *)func_ov000_02151440;
        *(uint32_t *)(p + 0x2c) = d;
    }
    ret = func_0208e018(fn, a, b, c);
    switch (ret) {
    case 0: case 1: case 3: case 4: case 5: case 6: case 7: case 8:
    default:
        return -5;
    case 2:
        if (d == 0) {
            uint32_t v;
            func_02087024(p + 4);
            v = *(uint16_t *)(p + 0x24);
            if (v == 0) return c;
            if (v == 1) return -5;
            return -5;
        }
        return c;
    }
}
