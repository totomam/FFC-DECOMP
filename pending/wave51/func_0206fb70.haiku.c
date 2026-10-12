#include "ffc/types.h"

extern char data_020aadd0[];
extern char data_020b0688[];
extern char data_020b20d0[];
extern char data_020b20e4[];
extern char data_0213e180[];

extern void func_02087620(void *object);
extern void func_0206c1c8(void *p, int v);
extern uint32_t func_02053524(void);
extern uint32_t func_ov006_0219ae14(void);
extern uint32_t func_02056830(uint32_t v);

void *func_0206fb70(void *p0, void *a1, uint32_t a2)
{
    uint8_t *s = (uint8_t *)p0;
    uint32_t *w = (uint32_t *)p0;
    uint32_t *q;
    uint32_t *r;
    uint32_t v;
    void **g;

    w[0] = (uint32_t)data_020aadd0;
    w[3] &= ~0xffu;
    q = (uint32_t *)(s + 0x14);
    v = (uint32_t)data_020b0688;
    q[1] = 0;
    q[2] = 0;
    q[3] = 0;
    q[0] = v;
    func_02087620(&q[4]);
    w[0] = (uint32_t)data_020b20d0;
    w[5] = (uint32_t)data_020b20e4;
    func_0206c1c8(s + 0x3d, 0);
    s[0x4c] = 0;
    s[0x4d] = 0;
    *(uint16_t *)(s + 0x4e) = 0;
    r = (uint32_t *)(s + 0x58);
    r[3] = (uint32_t)(r + 1);
    w[0x40 / 4] = 0;
    w[0x44 / 4] = (uint32_t)a1;
    w[0x48 / 4] = a2;
    r[0] = 0;
    r[1] = 0;
    g = (void **)data_0213e180;
    *g = s;
    w[0x54 / 4] = func_02053524();
    w[0x50 / 4] = func_02056830(func_ov006_0219ae14());
    w[0x76c / 4] = 0;
    w[0x768 / 4] = 0;
    return p0;
}
