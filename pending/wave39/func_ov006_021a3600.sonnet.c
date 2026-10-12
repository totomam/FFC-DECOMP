#include "ffc/types.h"

extern uint32_t func_02081334(uint32_t a, uint32_t b);
extern uint32_t func_0208130c(uint32_t a, uint32_t b);
extern void func_ov006_021b3e20(uint32_t a, uint32_t b, void *c);
extern uint8_t data_ov006_021b8048[];

typedef struct Sub {
    uint32_t w0;
    uint16_t h4;
} Sub;

typedef struct Ctx {
    uint8_t pad[4];
    Sub *p4;
    uint8_t b8;
    uint8_t b9;
} Ctx;

extern Ctx *data_ov006_021bc6a4;

void func_ov006_021a3600(void)
{
    uint32_t v, x;
    Sub *s;
    v = func_02081334(data_ov006_021bc6a4->b9 + 1, 0x28);
    data_ov006_021bc6a4->b9 = v;
    v = func_0208130c(data_ov006_021bc6a4->b9, 5);
    s = data_ov006_021bc6a4->p4;
    func_ov006_021b3e20(0, v + 0x47, s);
    s = data_ov006_021bc6a4->p4;
    s->h4 = (0x400 | (s->h4 & 0xfffff3ff));
    x = data_ov006_021b8048[data_ov006_021bc6a4->b8];
    s = data_ov006_021bc6a4->p4;
    s->w0 &= 0xfffff3ff;
    s->h4 = (s->h4 & 0xffff0fff) | (x << 12);
    s = data_ov006_021bc6a4->p4;
    s->w0 = (s->w0 & 0xfe00ff00) | 0x00e6008b;
}
