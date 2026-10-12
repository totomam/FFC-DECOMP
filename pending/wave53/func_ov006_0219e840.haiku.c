#include "ffc/types.h"

extern void func_ov006_0219ef6c(void *p, int c, uint32_t n);
extern uint32_t func_ov006_0219f038(uint32_t x);
extern uint32_t func_ov006_0219f010(void);
extern void func_ov006_0219ea14(void *a, void *b, void *c, void *d, void *e, void *f);
extern void func_ov006_0219ef5c(void *dst, void *src, uint32_t n);
extern int func_ov006_0219ed94(void *a, uint32_t n, void *b, uint32_t m);
extern void func_ov006_0219daa0(int x);
extern void func_ov006_0219ea68(void *a, int b, int c, int d, int e, int f, void *g);
extern void func_ov006_0219eac0(void *a, int b, int c, void *d);
extern uint32_t data_ov006_021ba1dc[];
extern uint8_t data_ov006_021b8b8c[];

typedef struct {
    uint8_t a;
    uint8_t p0;
    uint16_t b;
    uint16_t c;
    uint8_t p1[2];
    uint8_t t;
    uint8_t s;
    uint16_t v;
    uint32_t w;
    uint8_t cbuf[8];
} Big;

int func_ov006_0219e840(int unused, uint8_t *r5, uint32_t r6)
{
    Big f;
    uint8_t *r4;

    f.a = 0;
    f.c = 0;
    f.b = 0;
    r4 = (uint8_t *)data_ov006_021ba1dc[5];
    func_ov006_0219ef6c(&f.t, 0, 8);
    func_ov006_0219ef6c(r4, 0, 0x5dc);
    f.t = 2;
    f.s = 0;
    f.v = (uint16_t)func_ov006_0219f038(4);
    f.w = data_ov006_021ba1dc[11];
    f.w = func_ov006_0219f010();
    f.c = 8;
    func_ov006_0219ea14((void *)data_ov006_021ba1dc[0], r4 + 0x18, &f.t, &f.c, &f.b, &f);
    r5 += 8;
    func_ov006_0219ef5c(f.cbuf, r5, 8);
    if (func_ov006_0219ed94(f.cbuf, 8, data_ov006_021b8b8c, 6) != 0) {
        func_ov006_0219daa0(2);
        return -1;
    }
    func_ov006_0219ea68(r4, 0x2000, (int16_t)f.c, (int16_t)f.b, (int8_t)f.a, 0x11, f.cbuf);
    f.c = (uint16_t)(f.c + 0x18);
    func_ov006_0219eac0(r4, (int16_t)f.c, 0, (void *)r6);
    return 0;
}
