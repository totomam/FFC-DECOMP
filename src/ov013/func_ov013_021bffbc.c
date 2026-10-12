/* cflags: -lang c++ */
#include "ffc/types.h"

struct Quad { uint32_t a, b, c, d; };
struct Obj {
  virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
  virtual Quad v4(); virtual void v5(); virtual void v6(); virtual Quad v7();
  virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual uint32_t v12();
};

extern "C" void func_020628ac(void *e, Quad a);
extern "C" void func_02056c4c(void *f);
extern "C" uint32_t func_ov005_02195e2c(void *e, Quad a, Quad b, int32_t c, int32_t d);
extern "C" void func_02056bc0(void *f, uint32_t v);
extern "C" void func_0201e954(uint32_t v, uint32_t idx, void *out);
extern "C" uint32_t func_ov013_021c012c(void *obj, uint32_t idx);
extern "C" void func_ov005_021963cc(void *e, void *out, uint32_t flag);
extern "C" void func_ov005_021964c4(void *e);
extern "C" uint32_t data_020b93b8;

#define VFN(o, idx) (((void **)*(void **)(o))[idx])
#define FLD(T, p, off) (*(T *)((uint8_t *)(p) + (off)))
#define E0(p) FLD(void *, (p), 0xe0)
#define E4(p) FLD(void *, (p), 0xe4)

extern "C" void func_ov013_021bffbc(void *a0, void *p1)
{
    int32_t i;
    void *e;
    uint32_t out[6];


    if (p1 == 0) {
        e = E0(a0);
        ((Obj*)e)->v11();
        return;
    }

    e = E0(a0);
    if (((Obj*)e)->v12() != 0) {
        e = E0(a0);
        ((Obj*)e)->v10();
        func_020628ac(E0(a0), ((Obj*)p1)->v4());
    } else {
        func_02056c4c(FLD(void *, a0, 0xdc));
        {
            uint32_t r = func_ov005_02195e2c(E0(a0), ((Obj*)E0(a0))->v7(), ((Obj*)p1)->v4(), 10, -5);
            func_02056bc0(FLD(void *, a0, 0xdc), r);
        }
    }

    {
        void **g = FLD(void **, a0, 0xc0);
        for (i = 0; i < 8; i++) {
            if (p1 == g[i]) {
                uint32_t idx = i + (FLD(uint32_t, a0, 0x108) << 3);
                if (idx < FLD(uint32_t, a0, 0xec)) {
                    uint32_t ret;
                    func_0201e954(data_020b93b8, idx, out);
                    ret = func_ov013_021c012c(a0, i + (FLD(uint32_t, a0, 0x108) << 3));
                    func_ov005_021963cc(E4(a0), out, ret == 0);
                    return;
                }
            }
        }
        func_ov005_021964c4(E4(a0));
    }
}
