/* cflags: -lang c++ */
#include "ffc/types.h"

#define OFF(t, p, o) (*(t *)((uint8_t *)(p) + (o)))

struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(void *); };

extern "C" void *func_ov003_02152cf4(void *self);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void *func_02056dd4(void *self);
extern "C" void func_ov003_0214649c(void *x);
extern "C" void *func_ov003_02153470(void);
extern "C" void *func_02060f6c(void *a, uint32_t b, uint32_t c, uint32_t d);
extern "C" void *func_0203b688(void);
extern "C" void *func_02056aec(void *x);
extern "C" void *func_02061000(void *a, uint32_t b, uint32_t c, uint32_t d);
extern "C" void *func_02060ef8(void *a);
extern "C" void *func_ov003_021500ac(void *obj, uint32_t a2, uint32_t r4, uint8_t f);
extern "C" void *func_ov003_02151b9c(void *obj, uint32_t a2, uint32_t r4, uint8_t f);
extern "C" void func_0203b720(void);
extern "C" void func_0203b708(uint32_t x);

extern "C" void func_ov003_02152980(void *self, uint32_t a1, uint32_t a2, uint32_t a3, uint8_t sp20)
{
    uint32_t r4 = a3 << 1;
    void *r6;
    void *r7;
    void *t;
    void *obj;
    void *p;
    void *x;
    void *s;

    OFF(uint8_t, self, 0xc8) = (a2 == 1);
    t = func_ov003_02152cf4(self);
    func_02056bc0(OFF(void *, self, 0xb8), t);
    obj = func_02056dd4(self);
    r7 = OFF(void *, obj, 0x24);

    if (a1 != 0) goto L008c;
    func_ov003_0214649c(OFF(void *, self, 0x9c));
    p = func_ov003_02153470();
    ((Obj *)self)->v5(*(void **)p);
    if (OFF(void *, self, 0xa0) != 0) goto L0068;
    if (OFF(void *, self, 0xa4) == 0) goto L0180;
L0068:
    if (OFF(uint8_t, self, 0xd8) != 0) goto L0180;
    {
        void **pb = (void **)((uint8_t *)self + 0xb8);
        func_02056bc0(*pb, func_02060f6c(r7, r4, 0, 0));
    }
    goto L0180;

L008c:
    if (a2 != 0) goto L0148;
    if (OFF(void *, self, 0xa0) == 0) goto L00f0;
    r6 = func_0203b688();
    s = func_02056aec(OFF(void *, self, 0xa0));
    x = func_02061000(r7, r4, 0, 0);
    func_02056bc0(r6, x);
    func_02056bc0(r6, s);
    if (OFF(uint8_t, self, 0xd8) != 0) goto L00e0;
    x = func_02060ef8(r7);
    func_02056bc0(r6, x);
L00e0:
    OFF(void *, self, 0xa0) = 0;
    {
        void **pb = (void **)((uint8_t *)self + 0xb8);
        func_02056bc0(*pb, r6);
    }
    goto L0180;

L00f0:
    if (OFF(void *, self, 0xa4) == 0) goto L0180;
    r6 = func_0203b688();
    s = func_02056aec(OFF(void *, self, 0xa4));
    x = func_02061000(r7, r4, 0, 0);
    func_02056bc0(r6, x);
    func_02056bc0(r6, s);
    if (OFF(uint8_t, self, 0xd8) != 0) goto L0140;
    x = func_02060ef8(r7);
    func_02056bc0(r6, x);
L0140:
    OFF(void *, self, 0xa4) = 0;
    {
        void **pb = (void **)((uint8_t *)self + 0xb8);
        func_02056bc0(*pb, r6);
    }
    goto L0180;

L0148:
    if (OFF(void *, self, 0xa0) == 0) goto L0160;
    {
        void **pb = (void **)((uint8_t *)self + 0xb8);
        func_02056bc0(*pb, func_ov003_021500ac(OFF(void *, self, 0xa0), a2, r4, sp20));
    }
    goto L0180;
L0160:
    if (OFF(void *, self, 0xa4) == 0) goto L0178;
    {
        void **pb = (void **)((uint8_t *)self + 0xb8);
        func_02056bc0(*pb, func_ov003_02151b9c(OFF(void *, self, 0xa4), a2, r4, sp20));
    }
    goto L0180;

L0178:
    func_0203b720();
    return;

L0180:
    func_0203b708(r4);
}
