/* cflags: -lang c++ */
#include "ffc/types.h"
struct S8 { uint32_t a, b; };
struct VO { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual uint32_t f9(uint32_t); };
struct VS { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); };

extern "C" void *func_0205681c(uint32_t size);
extern "C" void *func_02057a24(void *obj, int arg);
extern "C" uint32_t func_02056dd4(void *obj);
extern "C" uint32_t func_0204f7ec(const void *object);
extern "C" void func_02057958(void *obj);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_02087620(void *object);
extern "C" uint32_t func_02056aa4(void);
extern "C" uint32_t func_02069f9c(void *obj, S8 s, uint32_t c);
extern "C" void *func_02056ac8(void *object);
extern "C" void *data_0213df18;
extern "C" uint8_t data_020b0b68[];
extern "C" uint8_t data_020b0b54[];
extern "C" S8 data_020b1b30;
extern "C" S8 data_020b1b38;

extern "C" void func_02069e08(uint8_t *self)
{
    uint8_t *r4;
    uint32_t r6;
    uint32_t r7;

    if (*(void **)(self + 0x88) == 0) {
        r4 = (uint8_t*)func_0205681c(0x2c);
        if (r4 != 0) {
            r4 = (uint8_t*)func_02057a24(r4, 1);
        }
        r6 = func_02056dd4(self);
        if (r6 == func_0204f7ec(data_0213df18)) {
            func_02057958(r4);
        }
        *(uint32_t *)(self + 0x88) = ((VO*)r4)->f9(0);
        func_02056bc0(self + 0x48, r4);
    }

    r4 = (uint8_t*)func_0205681c(0x34);
    if (r4 != 0) {
        *(uint32_t *)(r4 + 0xc) &= 0xffffff00;
        *(void **)r4 = data_020b0b68;
        func_02087620(r4 + 0x1c);
        { uint32_t t = r4[0x10]; t &= ~0xffu; r4[0x10] = (uint8_t)t; }
        { uint32_t t = r4[0x11]; t &= ~0xffu; r4[0x11] = (uint8_t)t; }
        { uint32_t t = r4[0x12]; t &= ~0xffu; r4[0x12] = (uint8_t)t; }
        *(uint32_t *)(r4 + 0x14) = 0;
        *(void **)(r4 + 0x18) = r4 + 0x14;
        *(void **)r4 = data_020b0b54;
        { uint32_t t = r4[0x11]; t &= ~0xffu; r4[0x11] = (uint8_t)t; }
    }
    *(void **)(self + 0x90) = r4;

    r4 = (uint8_t*)func_0205681c(0x34);
    if (r4 != 0) {
        *(uint32_t *)(r4 + 0xc) &= 0xffffff00;
        *(void **)r4 = data_020b0b68;
        func_02087620(r4 + 0x1c);
        { uint32_t t = r4[0x10]; t &= ~0xffu; r4[0x10] = (uint8_t)t; }
        { uint32_t t = r4[0x11]; t &= ~0xffu; r4[0x11] = (uint8_t)t; }
        { uint32_t t = r4[0x12]; t &= ~0xffu; r4[0x12] = (uint8_t)t; }
        *(uint32_t *)(r4 + 0x14) = 0;
        *(void **)(r4 + 0x18) = r4 + 0x14;
        *(void **)r4 = data_020b0b54;
        { uint32_t t = r4[0x11]; t &= ~0xffu; r4[0x11] = (uint8_t)t; }
    }
    *(void **)(self + 0x94) = r4;

    {
        uint8_t *q = self + 0x48;
        func_02056bc0(q, *(void **)(self + 0x90));
        func_02056bc0(q, r4);
    }

    if (self[0xb2] == 0) {
        ((VS*)self)->f4();
    } else {
        {
            uint8_t *s = self + 0x14;
            uint8_t *q = self + 0x48;
            uint32_t t = q[0x12];
            t &= ~0xffu;
            t |= 1;
            q[0x12] = (uint8_t)t;
            t = s[0x12];
            t &= ~0xffu;
            t |= 1;
            s[0x12] = (uint8_t)t;
        }
        r6 = func_02056aa4();
        r7 = func_02069f9c(self, data_020b1b30, 0);
        {
            void *t = func_02056ac8(self + 0x48);
            uint8_t *p = self + 0x14;
            func_02056bc0(p, t);
            func_02056bc0(p, (void *)r7);
            func_02056bc0(p, (void *)r6);
        }
    }

    uint32_t x = data_020b1b38.a;
    uint32_t y = data_020b1b38.b;
    *(uint32_t *)(self + 0x80) = x;
    *(uint32_t *)(self + 0x84) = y;
}
