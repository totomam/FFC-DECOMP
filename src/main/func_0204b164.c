#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    int32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
} Obj;

extern void *func_0204de70(void *p);
extern uint32_t func_0204de7c(void *p);
extern void func_0204a920(uint32_t a, uint32_t b);
extern void func_0204bc84(void *p);
extern void func_0204a8f0(uint32_t a, void *b);
extern uint32_t func_0204b098(uint32_t a);
extern void func_0204dec4(void);
extern void func_0204dca8(void);
extern void func_0204a9b8(uint32_t a, uint32_t b, uint32_t c);

void func_0204b164(void *a, void (*cb)(void)) {
    Obj *o;
    uint32_t r7;

    o = (Obj *)func_0204de70(a);
    r7 = func_0204de7c(a);
    func_0204a920(r7, 1);
    func_0204bc84(a);
    func_0204a8f0(r7, o);
    func_0204b098(o->f1c);
    o->f1c = 0;
    func_0204dec4();
    o->f8 = 0;
    if (cb != 0) {
        cb();
    }
    func_0204dca8();
    {
        int32_t fc = o->fc;
        if (fc >= 0) {
            int32_t z = 0;
            func_0204a9b8(0, 0, fc);
            o->fc = z - 1;
        }
    }
}
