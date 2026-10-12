/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Blk16;
struct VP { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual Blk16 v4(); virtual void v5(); virtual void v6(); virtual Blk16 v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual int v12(); };
extern "C" {
typedef struct { uint32_t w0; uint32_t a; uint32_t b; uint8_t flag; } Obj64;

extern void func_020628ac(void *o, Blk16 b);
extern void func_02056c4c(void *x);
extern uint32_t func_ov005_02195e2c(void *o, Blk16 a, Blk16 b, int i, int j);
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

}
extern "C" void func_ov008_0219eeac(uint8_t *self, VP *p)
{
    void *o;
    void **vt;
    Obj64 t;
    uint8_t buf1[0xc];
    uint8_t buf2[0xc];
    uint8_t idx;
    uint8_t i;
    uint32_t v;
    uint8_t *res;

    self[0x103] = 0;
    if (p == 0) {
        (*(VP **)(self + 0xe0))->v11();
        return;
    }
    if ((*(VP **)(self + 0xe0))->v12() != 0) {
        (*(VP **)(self + 0xe0))->v10();
        func_020628ac(*(void **)(self + 0xe0), p->v4());
    } else {
        func_02056c4c(*(void **)(self + 0xdc));
        v = func_ov005_02195e2c(*(void **)(self + 0xe0), (*(VP **)(self + 0xe0))->v7(), p->v4(), 10, -5);
        func_02056bc0(*(void **)(self + 0xdc), (void *)v);
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
