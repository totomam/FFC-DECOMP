#include "ffc/types.h"

extern void func_02056c9c(void *obj, uint32_t a, uint32_t b);
extern void func_02087620(void *object);
extern void func_02005988(void *out, const void *src);
extern void func_0205d508(void *obj, void *arg, uint32_t zero);
extern void *func_020059cc(void *object);
typedef struct { uint32_t a, b; } S;
extern char data_020ae6d4[];
extern char data_ov007_021c3e10[];
extern char data_ov007_021c3e2c[];
extern char data_ov007_021c42a8[];
extern uint32_t data_ov007_021c42b8[];

void *func_ov007_021a55c4(void *pv, uint32_t a1, uint32_t a2)
{
    uint8_t *p = (uint8_t *)pv;
    uint32_t *s;
    uint32_t *t;
    uint8_t buf[12];

    func_02056c9c(p, 0, a2);

    s = (uint32_t *)(p + 0x80);
    *(uint32_t *)(p + 0x80) = (uint32_t)data_020ae6d4;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    t = (uint32_t *)((uint8_t *)s + 0x10);
    t[1] = 0;
    t[2] = 0;
    func_02087620((uint8_t *)s + 0x1c);

    *(uint32_t *)(p + 0x00) = (uint32_t)data_ov007_021c3e10;
    *(uint32_t *)(p + 0x80) = (uint32_t)data_ov007_021c3e2c;
    *(uint32_t *)(p + 0xc0) = a1;
    *(uint16_t *)(p + 0xc4) = (uint16_t)a2;
    {
    uint32_t *u = (uint32_t *)(p + 0xc8);
    *(uint32_t *)(p + 0xc8) = 0;
    uint32_t *w0 = (uint32_t *)(p + 0xe0);
    *(uint32_t *)(p + 0xd4) = 0;
    u[1] = 0;
    u[2] = 0;
    uint32_t *v = (uint32_t *)(p + 0xd4);
    v[1] = 0;
    v[2] = 0;
    uint32_t *w = (uint32_t *)(p + 0xe0);
    *w0 = 0;
    w[1] = 0;
    w[2] = 0;
    }

    func_02005988(buf, data_ov007_021c42a8);
    func_0205d508(p + 0xf4, buf, 0);
    func_020059cc(buf);

    *(S *)(p + 0xb8) = *(S *)data_ov007_021c42b8;

    return p;
}
