#include "ffc/types.h"

extern uint32_t func_ov000_0214f148(uint32_t v);
extern void func_ov000_021652a8(int a, int b, int c, const void *d, ...);
extern void func_ov001_02182f78(void *a);
extern void func_ov001_02182bdc(void *a, int b, uint32_t c, void *d);
extern uint8_t data_ov001_0219240c[];
extern uint8_t data_ov001_02192460[];
extern uint8_t data_ov001_021924b4[];
extern uint8_t data_ov001_021924e8[];

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t pad8[4];
    uint32_t w18;
    uint32_t w1c;
    uint32_t pad20[7];
    uint32_t w3c;
    uint16_t h40;
    uint8_t b42;
    uint8_t b43;
} A;

typedef struct {
    uint8_t pad[0x12];
    uint8_t b12;
    uint8_t b13;
} S;

typedef struct {
    uint8_t pad[2];
    uint16_t h2;
    uint32_t w4;
} P;

static inline uint32_t swap16(uint32_t q)
{
    return ((q >> 8) & 0xff) | ((q << 8) & 0xff00);
}

void func_ov001_021837d0(A *a, S *s, P *p)
{
    uint32_t f;
    uint32_t sw;

    f = func_ov000_0214f148(p->w4);
    sw = swap16(p->h2);
    func_ov000_021652a8(7, 0, 8, data_ov001_0219240c, a->w4, f, sw, s->b12, s->b13);

    if (a->w1c < 4) {
        func_ov000_021652a8(7, 0, 8, data_ov001_02192460, a->w4);
        return;
    }

    f = func_ov000_0214f148(p->w4);
    sw = swap16(p->h2);
    func_ov000_021652a8(7, 0, 8, data_ov001_021924b4, f, sw, s->b12, s->b13);

    a->w3c = p->w4;
    a->h40 = (uint16_t)sw;
    a->b42 = 1;
    a->b43 = (s->b12 != 0) ? 1 : 0;

    func_ov001_02182f78(a);

    if (a->w1c == 4 && a->b43 != 0) {
        func_ov000_021652a8(7, 0, 8, data_ov001_021924e8, a->w4);
        func_ov001_02182bdc(a, 0, (a->w0 == 0xffffffffu) ? a->w18 : a->w0, p);
    }
}
