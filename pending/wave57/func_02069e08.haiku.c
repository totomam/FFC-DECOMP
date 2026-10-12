#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_02057a24(void *obj, int arg);
extern uint32_t func_02056dd4(void *obj);
extern uint32_t func_0204f7ec(const void *object);
extern void func_02057958(void *obj);
extern void func_02056bc0(void *object, void *node);
extern void func_02087620(void *object);
extern uint32_t func_02056aa4(void);
extern uint32_t func_02069f9c(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern void *func_02056ac8(void *object);
extern void *data_0213df18;
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b54[];
extern uint32_t data_020b1b30[];
extern uint32_t data_020b1b38[];

void func_02069e08(uint8_t *self)
{
    uint8_t *r4;
    uint32_t r6;
    uint32_t r7;

    if (*(void **)(self + 0x88) == 0) {
        r4 = func_0205681c(0x2c);
        if (r4 != 0) {
            r4 = func_02057a24(r4, 1);
        }
        r6 = func_02056dd4(self);
        if (r6 == func_0204f7ec(data_0213df18)) {
            func_02057958(r4);
        }
        {
            void *o = r4;
            void **vt = *(void ***)o;
            *(uint32_t *)(self + 0x88) = ((uint32_t (*)(void *, uint32_t))vt[9])(o, 0);
        }
        func_02056bc0(self + 0x48, r4);
    }

    r4 = func_0205681c(0x34);
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

    r4 = func_0205681c(0x34);
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
        void **vt = *(void ***)self;
        ((void (*)(void *))vt[4])(self);
    } else {
        {
            uint8_t *q = self + 0x48;
            uint8_t *s = self + 0x14;
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
        r7 = func_02069f9c(self, data_020b1b30[0], data_020b1b30[1], 0);
        {
            void *t = func_02056ac8(self + 0x48);
            func_02056bc0(self + 0x14, t);
        }
        func_02056bc0(self + 0x14, (void *)r7);
        func_02056bc0(self + 0x14, (void *)r6);
    }

    *(uint32_t *)(self + 0x80) = data_020b1b38[0];
    *(uint32_t *)(self + 0x84) = data_020b1b38[1];
}
