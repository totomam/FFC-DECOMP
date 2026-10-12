#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
typedef struct { uint32_t a, b; } S;
extern void *func_020763c4(void *p, S s);
extern S data_020b283c;
extern void *func_020757c8(void *x);
extern void *func_02075a54(void *x);
extern void func_02056bc0(void *object, void *node);
extern void func_02056f0c(void *object, int v);
extern uint8_t data_020b0b68[];
extern uint8_t data_020b0b7c[];

void *func_02076314(uint8_t *p) {
    uint8_t *r4;
    void *r6;
    void *r7;
    void *r1;
    uint32_t m = 0xff;

    if (*(void **)(p + 0x88) == 0) {
        goto early;
    }
    r4 = func_0205681c(0x34);
    if (r4 != 0) {
        *(uint32_t *)(r4 + 0xc) &= ~m;
        *(void **)r4 = data_020b0b68;
        func_02087620(r4 + 0x1c);
        { uint32_t t = r4[0x10]; t &= ~m; r4[0x10] = (uint8_t)t; }
        { uint32_t t = r4[0x11]; t &= ~m; r4[0x11] = (uint8_t)t; }
        { uint32_t t = r4[0x12]; t &= ~m; r4[0x12] = (uint8_t)t; }
        *(uint32_t *)(r4 + 0x14) = 0;
        *(void **)(r4 + 0x18) = r4 + 0x14;
        *(void **)r4 = data_020b0b7c;
        { uint32_t t = r4[0x11]; t &= ~m; r4[0x11] = (uint8_t)(t | 1); }
    }
    r6 = func_020763c4(p, data_020b283c);
    r7 = func_020757c8(*(void **)(p + 0x88));
    r1 = func_02075a54(*(void **)(p + 0x88));
    func_02056bc0(r4, r1);
    func_02056bc0(r4, r7);
    func_02056bc0(r4, r6);
    return r4;
    return;

early:
    {
        void *q = func_0205681c(0x18);
        if (q != 0) {
            func_02056f0c(q, 1);
        }
    }
    return;
}
