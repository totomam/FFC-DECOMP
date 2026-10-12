#include "ffc/types.h"

extern int func_02087460(void);
extern uint32_t *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern uint32_t func_02087d88(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02087c08(uint32_t index, uint32_t value);
extern void func_02087bfc(uint32_t index, uint32_t value);
extern uint32_t func_02087dfc(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t data_02139d44[];

void func_0204999c(void)
{
    uint32_t half;
    uint32_t base;
    uint32_t s;
    uint32_t *p;

    if (func_02087460() != 0) {
        return;
    }
    p = func_0205681c(0x24);
    if (p != 0) {
        base = 0x02000000;
        p[0] = base;
        p[1] = base >> 11;
        func_02087620(p + 3);
        half = p[1];
        s = func_02087d88(0, base, base + half, 1);
        func_02087c08(0, s);
        func_02087bfc(0, base + half);
        p[2] = func_02087dfc(0, s, base + half);
    }
    data_02139d44[1] = (uint32_t)p;
    ((uint8_t *)data_02139d44)[0] = 1;
}
