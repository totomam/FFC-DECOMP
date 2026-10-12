/* cflags: -lang c++ */
#include "ffc/types.h"

typedef struct { uint32_t f0, f4, f8; uint8_t fc; } Obj;
typedef struct { uint32_t w[12]; } El;
typedef struct { El *base; uint32_t count; } Arr;
struct B1 { uint8_t b; ~B1() {} };

extern "C" uint32_t data_020b8e44;
extern "C" void func_020161cc(void *object, uint32_t x);
extern "C" void *func_02052d90(uint32_t a, uint32_t b);
extern "C" uint32_t func_ov002_021cdd0c(void *a, uint32_t b, El *c, void *d, void *e);
extern "C" El *func_ov002_021d2ac4(void *a, El *b, B1 c);
extern "C" void func_02052d3c(uint32_t a, uint32_t b);
extern "C" void func_02052c04(uint32_t a);
extern "C" void *func_02053290(void *object);

typedef struct { uint32_t res; uint8_t flag; uint32_t p1; } L;

extern "C" void func_ov002_021ce544(void *a, uint32_t p1, uint32_t p2, Arr *p3)
{
    Obj obj;
    uint32_t *t;
    El *e;
    uint32_t j;
    L l;
    B1 fl;
    L *lp = &l;

    func_020161cc(&obj, data_020b8e44);
    t = (uint32_t *)func_02052d90(obj.f4, obj.f8);

    e = p3->base;
    while (p3->base + p3->count != e) {
        {
            for (j = 0; j < t[1]; j++) {
                lp->res = func_ov002_021cdd0c(a, p1, e, (void *)p2,
                                          (uint8_t *)t + *(uint32_t *)((uint8_t *)t + t[2] + j * 4));
                if (lp->res == 0) {
                    break;
                }
            }
        }
        if (lp->res == 0) {
            lp->flag = 0;
            fl.b = lp->flag;
            e = func_ov002_021d2ac4(p3, e, fl);
        } else {
            e++;
        }
    }

    if (obj.f4 != 0) {
        if (obj.fc != 0) {
            func_02052d3c(obj.f4, obj.f8);
        }
        func_02052c04(obj.f4);
    }
    func_02053290(&obj);
}
