/* cflags: -lang c++ */
#include "ffc/types.h"

struct Blk { uint32_t w[4]; };

struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual Blk f4(); virtual void v5(); virtual void v6(); virtual Blk f7();
    virtual void v8(); virtual void v9(); virtual void f10(); virtual void f11();
    virtual int f12();
};

struct Self {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void f12(uint32_t idx, void *buf);
    virtual int f13();
    virtual int f14(void *buf);
};

extern "C" void func_020628ac(void *obj, Blk t);
extern "C" void func_02056c4c(void *obj);
extern "C" void *func_ov005_02195e2c(void *obj, Blk t, Blk u, int a, int b);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" int func_ov005_02198678(void *self, uint32_t idx);
extern "C" void func_ov005_021963cc(void *obj, void *p, int flag);
extern "C" void func_ov005_021964c4(void *obj);

extern "C" void func_ov005_02198340(uint8_t *self, Obj *p)
{
    uint16_t i;
    uint32_t idx;
    uint8_t g[0x18];
    Self *s = (Self *)self;

    *(self + 0x14a) = 0;
    if (p == 0) {
        (*(Obj **)(self + 0x134))->f11();
        return;
    }
    if ((*(Obj **)(self + 0x134))->f12() != 0) {
        (*(Obj **)(self + 0x134))->f10();
        func_020628ac(*(void **)(self + 0x134), p->f4());
    } else {
        void *o;
        func_02056c4c(*(void **)(self + 0x130));
        o = func_ov005_02195e2c(*(void **)(self + 0x134), (*(Obj **)(self + 0x134))->f7(), p->f4(), 10, -5);
        func_02056bc0(*(void **)(self + 0x130), o);
    }

    for (i = 0; i < 8; i++) {
        if ((void *)p == ((void **)*(uint32_t *)(self + 0x114))[i]) {
            self[0x149] = (uint8_t)i;
            idx = (uint8_t)(self[0x149] + (*(uint32_t *)(self + 0xfc) << 3));
            if (idx < *(uint32_t *)(self + 0x140)) {
                s->f12(idx, g);
                if (func_ov005_02198678(self, idx) == 0 && (s->f14(g) == 0 || s->f13() == 0))
                    func_ov005_021963cc(*(void **)(self + 0x138), g, 1);
                else
                    func_ov005_021963cc(*(void **)(self + 0x138), g, 0);
                self[0x148] = (uint8_t)idx;
                return;
            }
        }
    }
    func_ov005_021964c4(*(void **)(self + 0x138));
    self[0x148] = 0xff;
}
