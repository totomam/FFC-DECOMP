#include "ffc/types.h"

extern void func_ov000_021652a8(uint32_t a, uint32_t b, uint32_t c, const void *d, ...);
extern void *func_ov000_021653d4(uint32_t size);
extern uint32_t func_ov001_02172d90(uint32_t v);
extern uint8_t data_ov001_0218f544[];
extern uint8_t data_ov001_0218f42a[];
extern uint8_t data_ov001_0218f87c[];
extern uint8_t data_ov001_0218f88c[];
extern uint8_t data_ov001_0218f8d4[];
extern uint8_t data_ov001_0218f910[];

typedef struct {
    uint32_t *buf;
    uint32_t u4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} Out;

typedef struct {
    uint8_t pad[0x14];
    uint32_t v14;
} Src;

uint32_t func_ov001_02172e54(Src *s, Out *o)
{
    uint32_t line = 0x417;
    uint32_t *p;
    uint32_t r;

    func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f87c, data_ov001_0218f544, data_ov001_0218f42a, line);
    o->buf = func_ov000_021653d4(8);
    if (o->buf == 0) {
        line += 0xe;
        func_ov000_021652a8(8, 2, 2, data_ov001_0218f88c, data_ov001_0218f544, data_ov001_0218f42a, line, 8);
        return 3;
    }
    {
        uint8_t *b = (uint8_t *)o->buf;
        b[0] = 0;
        b[1] = 0;
        b[2] = 0;
        b[3] = 0;
        b[4] = 0;
        b[5] = 0;
        b[6] = 0;
        b[7] = 0;
    }
    p = o->buf;
    r = func_ov001_02172d90(s->v14);
    p[0] = r;
    p[1] = 0;
    if (r == 0) {
        line += 0x1a;
        func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f8d4, data_ov001_0218f544, data_ov001_0218f42a, line);
        return 3;
    }
    o->fc = 0;
    o->f10 = 0;
    o->f14 = 0;
    o->f8 = 1;
    o->f18 = 1;
    o->f1c = 1;
    line += 0x26;
    func_ov000_021652a8(8, 4, 0xf, data_ov001_0218f910, data_ov001_0218f544, data_ov001_0218f42a, line);
    return 1;
}
