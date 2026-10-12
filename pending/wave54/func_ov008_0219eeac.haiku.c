#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Blk16;
typedef struct { uint32_t w0; uint32_t a; uint32_t b; uint8_t flag; } Obj64;

extern void func_020628ac(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056c4c(void *x);
extern uint32_t func_ov005_02195e2c(void *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                    uint32_t e, uint32_t f, uint32_t g, uint32_t h,
                                    uint32_t i, uint32_t j);
extern void func_02056bc0(void *obj, void *node);
extern void func_02018ec8(void *dst, void *src);
extern uint8_t *func_02052d90(uint32_t mar, uint32_t index);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *dst, void *src);
extern void func_02068ddc(void *a, void *b);
extern void func_020059cc(void *o);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void func_02053290(void *o);
extern void *data_020b8e44;
extern uint8_t data_ov008_021a84f0[];

void func_ov008_0219eeac(uint8_t *self, void *p)
{
    void *o;
    void **vt;
    uint8_t buf2[0xc];
    uint8_t buf1[0xc];
    Blk16 s34;
    Blk16 s44;
    Blk16 s54;
    Obj64 t;
    uint8_t idx;
    uint32_t i;
    uint32_t v;
    uint8_t *res;

    self[0x103] = 0;
    o = *(void **)(self + 0xe0);
    vt = *(void ***)o;
    if (((int (*)(void *))vt[0x30 / 4])(o) != 0) {
        o = *(void **)(self + 0xe0);
        vt = *(void ***)o;
        ((void (*)(void *))vt[0x28 / 4])(o);
        ((void (*)(void *, Blk16 *))(*(void ***)p)[0x10 / 4])(p, &s54);
        func_020628ac(*(void **)(self + 0xe0), s54.a, s54.b, s54.c, s54.d);
    } else {
        func_02056c4c(*(void **)(self + 0xdc));
        o = *(void **)(self + 0xe0);
        vt = *(void ***)o;
        ((void (*)(void *, Blk16 *))vt[0x1c / 4])(o, &s44);
        ((void (*)(void *, Blk16 *))(*(void ***)p)[0x10 / 4])(p, &s34);
        func_ov005_02195e2c(o, s44.a, s44.b, s44.c, s44.d,
                            s34.a, s34.b, s34.c, s34.d, 10, (uint32_t)-5);
        func_02056bc0(*(void **)(self + 0xdc), 0);
    }

    for (i = 0; i < 8; i++) {
        if (p == ((void **)*(void **)(self + 0xc4))[i]) {
            self[0x102] = (uint8_t)i;
            idx = (uint8_t)(self[0x102] + (self[0x100] << 3));
            if (idx < *(uint32_t *)(self + 0xf8)) {
                func_02018ec8(&t, data_020b8e44);
                v = ((uint32_t *)*(void **)(self + 0xf4))[idx];
                res = func_02052d90(t.a, t.b);
                res = (uint8_t *)func_020159c8(data_020b8e44,
                        *(uint16_t *)(res + *(uint32_t *)(res + 8) + v * 4));
                func_02005988(buf1, res);
                func_02068ddc(*(void **)(self + 0xe4), buf1);
                func_020059cc(buf1);
                if (t.a != 0) {
                    if (t.flag != 0) {
                        func_02052d3c(t.a, t.b);
                    }
                    func_02052c04(t.a);
                }
                func_02053290(&t);
                return;
            }
        }
    }
    func_02005988(buf2, data_ov008_021a84f0);
    func_02068ddc(*(void **)(self + 0xe4), buf2);
    func_020059cc(buf2);
}
