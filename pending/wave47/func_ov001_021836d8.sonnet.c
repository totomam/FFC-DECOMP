#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t);

typedef struct {
    uint32_t w0;
    uint32_t w4;
    uint32_t w8;
    fn_t wc;
    uint32_t w10;
    uint32_t w14;
    int32_t w18;
    int32_t w1c;
    uint32_t w20[4];
    uint32_t w30;
    uint32_t w34;
    uint32_t w38;
    uint32_t w3c;
    uint16_t w40;
} Obj;

typedef struct {
    uint8_t p0[0xc];
    uint32_t w0c;
    uint16_t h10;
    uint8_t p12;
    uint8_t b13;
} Src;

extern uint32_t func_ov000_0214f148(uint32_t x);
extern void func_ov000_021652a8(int a, int b, int c, const void *d, ...);
extern void func_ov001_02183634(Obj *a, uint32_t c);
extern void func_ov001_02182bdc(Obj *a, int b, int c, int d);
extern void func_ov001_02182f78(Obj *a);
extern uint8_t data_ov001_021922f8[];
extern uint8_t data_ov001_02192350[];
extern uint8_t data_ov001_021923a8[];
extern uint8_t data_ov001_021923dc[];

void func_ov001_021836d8(Obj *a, Src *b, uint32_t c)
{
    uint32_t w = b->w0c;
    uint16_t h = b->h10;
    uint32_t t = func_ov000_0214f148(w);
    uint32_t s = (uint32_t)(h << 8);
    int r1;

    func_ov000_021652a8(7, 0, 8, data_ov001_021922f8, a->w4, (uint32_t)b->b13, t,
                        (uint16_t)((uint8_t)(h >> 8) | (s & 0xff00)));

    if (b->b13 == 0) {
        func_ov001_02183634(a, c);
    }

    if (a->w1c >= 4) {
        func_ov000_021652a8(7, 0, 8, data_ov001_02192350, a->w4);
        return;
    }

    if (b->b13 != 0) {
        r1 = 4;
        if (b->b13 == 1) {
            func_ov000_021652a8(7, 0, 8, data_ov001_021923a8, a->w4);
            r1 = 1;
        } else if (b->b13 == 2) {
            func_ov000_021652a8(7, 0, 8, data_ov001_021923dc, a->w4);
            r1 = 2;
        }
        func_ov001_02182bdc(a, r1, -1, 0);
        return;
    }
    a->w3c = b->w0c;
    a->w40 = (uint16_t)((uint8_t)(b->h10 >> 8) | ((b->h10 << 8) & 0xff00));
    a->w30 = 0;
    a->w1c = 4;
    a->wc(4, a->w14);
    func_ov001_02182f78(a);
}
