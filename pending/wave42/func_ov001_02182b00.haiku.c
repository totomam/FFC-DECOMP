#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern void func_02090380(void *destination, const void *source, uint32_t length);
extern uint32_t func_ov000_0214f148(uint32_t v);
extern void func_ov000_021652a8(int a, int b, int c, void *d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov001_02182a68(uint32_t a, uint32_t b, uint32_t c, void *d, uint32_t e);
extern uint8_t data_ov001_02191b58[];
extern uint32_t data_ov001_02191b4c;
extern uint32_t data_ov001_021952f0[];
extern uint32_t data_ov001_0219531c;
extern uint8_t data_ov001_02191b90[];

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c[10];
    uint32_t f44;
} Obj;

typedef struct { uint8_t b[6]; } Hdr;

typedef struct {
    uint8_t h[16];
    uint32_t a;
    uint32_t b;
    uint8_t c[0x32];
} Msg;

void func_ov001_02182b00(Obj *p)
{
    Msg m;
    uint32_t r;

    *(Hdr *)m.h = *(Hdr *)data_ov001_02191b58;
    m.h[6] = 4;
    m.h[7] = 0xd;

    {
        uint32_t x = p->f4;
        uint32_t t3 = x << 24;
        uint32_t t5 = (x << 8) & 0x00ff0000;
        uint32_t t6 = t3 & 0xff000000;
        uint32_t b3 = (x >> 24) << 24 >> 24;
        uint32_t a2 = (x >> 8) & 0xff00;
        *(uint32_t *)&m.h[8] = ((a2 | b3) | t5) | t6;
    }

    m.h[0xd] = (uint8_t)p->f8;
    m.h[0xe] = (p->f44 == 0) ? 1 : 0;

    m.a = data_ov001_02191b4c;
    m.b = data_ov001_021952f0[2];

    if (func_02092864((const uint8_t *)0x02170990) != 0) {
        func_02090380(m.c, (const void *)0x02170990, 0x32);
    }

    r = func_ov000_0214f148(data_ov001_0219531c);
    func_ov000_021652a8(7, 0, 8, data_ov001_02191b90, p->f4, r, 0x6cfd, m.h[0xe]);
    func_ov001_02182a68(p->f18, data_ov001_021952f0[11], 0x6cfd, m.h, 0x49);
}
