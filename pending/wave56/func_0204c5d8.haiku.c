#include "ffc/types.h"

extern void *func_0204de50(void *a);
extern void *func_0204de80(void *a);
extern uint32_t **func_0204de78(void *a);
extern uint32_t func_0204de7c(void *a);
extern uint32_t *func_0204de70(void *a);
extern int func_0204bfd4(void *a, uint32_t *b, uint32_t c, uint32_t *d, uint32_t e);
extern uint32_t func_0204aef4(uint32_t *buf, uint32_t v);
extern int func_0204c19c(void *dev, const void *buf, uint32_t len);
extern int func_0204c058(void *a, uint32_t *b, uint32_t c, uint32_t d, uint32_t e, void *f, uint32_t g);
extern uint8_t data_020b02a0[];
extern uint8_t data_020b022c[];

int func_0204c5d8(void *p5)
{
    void *r6;
    void *r7;
    uint32_t *r4;
    uint32_t c;
    uint32_t v;
    uint32_t buf[3];
    uint32_t n;
    int r;

    r6 = func_0204de50(p5);
    r7 = func_0204de80(r6);
    r4 = (uint32_t *)(*func_0204de78(r6))[3];
    c = func_0204de7c(r6);
    r6 = func_0204de70(r6);

    v = 0;
    if (r4[0x93] == 0) {
        if (func_0204bfd4(r7, r4, 0, &v, 0) == 0) {
            return 3;
        }
    } else {
        v = r4[0x94];
    }

    n = func_0204aef4(buf, v);

    r = func_0204c19c(p5, data_020b02a0, 16);
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(p5, buf, n);
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(p5, data_020b022c, 2);
    if (r != 0) {
        return r;
    }
    r = func_0204c19c(p5, data_020b022c, 2);
    if (r != 0) {
        return r;
    }

    if (r4[0x93] == 0) {
        r = func_0204c058(r7, r4, c + 0x100, 0, ((uint32_t *)r6)[3], (uint8_t *)p5 + 0x324, 0);
        return r;
    } else {
        r = func_0204c19c(p5, (const void *)r4[0x93], r4[0x94]);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
