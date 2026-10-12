#include "ffc/types.h"

extern void *func_020578c0(void *object, uint32_t value);
extern char data_020b1f5c[];
extern char data_020b1f70[];
extern char *data_0213e178;
extern uint32_t func_0209cec8(uint32_t a, uint32_t b, uint32_t c, void (*d)(void), void (*e)(void));
extern uint32_t func_02056830(uint32_t x);
extern void func_02084b2c(uint32_t a, uint32_t b, uint32_t c);
extern void func_02054714(void *p);
extern void func_0205763c(void);
extern void func_02057658(void);

void *func_0206d910(uint8_t *p, uint32_t value) {
    uint32_t r;
    func_020578c0(p, value);
    *(char **)p = data_020b1f5c;
    *(char **)(p + 0x14) = data_020b1f70;
    *(uint32_t *)(p + 0x238) = 2;
    *(uint32_t *)(p + 0x23c) = *(uint32_t *)(data_0213e178 + 0x44);
    *(uint32_t *)(p + 0x240) = *(uint32_t *)(data_0213e178 + 0x30ac);
    p[0x244] = 0;
    p[0x245] = 0;
    p[0x246] = 1;
    *(uint32_t *)(p + 0x20) = func_0209cec8(*(uint32_t *)(p + 0x240), 0x2c, 8, func_0205763c, func_02057658);
    r = func_02056830(*(uint32_t *)(p + 0x240) * 2);
    *(uint32_t *)(p + 0x2c) = r;
    func_02084b2c(r, 0, *(uint32_t *)(p + 0x240) * 2);
    *(uint16_t *)(p + 0x28) = 0;
    *(uint32_t *)(p + 0x24) = 0;
    func_02054714(p + 0x14);
    return p;
}
