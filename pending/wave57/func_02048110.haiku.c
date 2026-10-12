#include "ffc/types.h"

extern void func_02016704(void *out, uint32_t v);
extern void *func_02052d90(void *mar, uint32_t index);
extern float func_0209a484(uint32_t x);
extern float func_0209b5bc(float a, float b);
extern float func_0209b338(float a, float b);
extern void *func_0205681c(uint32_t n);
extern void *func_ov003_02166a58(void *a, void *b, int c, int d, uint32_t e, uint32_t f, float g, uint16_t h, uint32_t i);
extern void func_02056bc0(void *object, void *node);
extern void *func_02021610(uint32_t a, uint32_t b);
extern void *func_0203b75c(uint32_t a);
extern void *func_ov003_02166ae0(void *a, void *b, int c);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern uint32_t data_020b8e44;
extern uint32_t data_020afcc8[2];

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

typedef struct {
    uint32_t pad;
    void *a;
    uint32_t b;
    uint8_t flag;
} Local;

typedef struct {
    uint16_t h0;
    uint16_t h2;
    uint32_t w4;
    uint32_t w8;
    uint32_t wc;
} Rec;

void func_02048110(uint8_t *self) {
    volatile uint32_t pr[2];
    Local loc;
    uint8_t *d;
    Rec *r;
    void *node;
    void *p;
    float angle;
    uint16_t h2;

    func_02016704(&loc, data_020b8e44);
    d = func_02052d90(loc.a, loc.b);
    pr[0] = 0;
    r = (Rec *)(d + *(uint32_t *)(d + *(uint32_t *)(d + 0xc) + 0xc8));
    pr[1] = 0;
    pr[0] = r->w4;
    pr[1] = r->w8;
    angle = func_0209b338(360.0f, func_0209b5bc(func_0209a484(r->wc), 4096.0f));
    h2 = r->h2;
    p = func_0205681c(0x34);
    if (p != 0) {
        node = func_ov003_02166a58(p, *(void **)(self + 0x80), 1, 0x32, pr[0], pr[1], angle, h2, 0);
    } else {
        node = 0;
    }
    func_02056bc0(self + 0x14, node);
    func_02056bc0(self + 0x14, func_02021610(0x4d, 0));
    func_02056bc0(self + 0x14, func_0203b75c(0x3c));
    p = func_0205681c(0x1c);
    if (p != 0) {
        node = func_ov003_02166ae0(p, *(void **)(self + 0x80), 1);
    } else {
        node = 0;
    }
    func_02056bc0(self + 0x14, node);
    *(uint32_t *)(self + 0x84) = data_020afcc8[0];
    *(uint32_t *)(self + 0x88) = data_020afcc8[1];
    if (loc.a != 0) {
        if (loc.flag != 0) {
            func_02052d3c(loc.a, loc.b);
        }
        func_02052c04(loc.a);
    }
    func_02053290(&loc);
}
