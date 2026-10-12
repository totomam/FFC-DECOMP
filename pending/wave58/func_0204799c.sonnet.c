#include "ffc/types.h"

extern uint32_t func_02043f20(uint32_t a, uint16_t b);
extern void func_02056bc0(void *object, void *node);
extern void func_0203919c(void *object, uint16_t v);
extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_02008f2c(void *object, void *value, uint32_t a, int32_t b);
extern uint32_t func_020489ac(void *object, void *node);
extern uint32_t func_0204f7ec(const void *object);
extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, void *src);
extern void *func_02009ba8(void *obj, uint32_t a, void *b, uint32_t c);
extern void *func_020059cc(void *object);
extern uint32_t func_0203be48(uint32_t a, void *b, uint32_t c, uint8_t d);
extern uint32_t func_02056aec(void *object);
extern void *data_0213df18;
extern uint8_t data_020afc80[];
extern uint8_t data_020afc8c[];
extern uint8_t data_020afc98[];
extern uint8_t data_020afca4[];

void func_0204799c(uint8_t *p)
{
    uint8_t st;
    uint8_t cur;
    uint32_t s0;
    uint32_t a4[3];
    uint32_t a10[3];
    uint32_t a1c[3];
    uint32_t a28[3];
    uint32_t a34[3];
    uint32_t r4;
    uint32_t r6;
    uint32_t cond;
    void *r7;

    st = p[0x87];
    p[0x87]++;
    if (st == 0) {
        goto s0blk;
    }
    if (st == 1) {
        goto s1blk;
    }
    return;
s0blk:
    {
        uint32_t v = func_02043f20(*(uint32_t *)(p + 0x80), *(uint16_t *)(p + 0x84));
        func_02056bc0(p + 0x14, (void *)v);
        return;
    }
s1blk:

    func_0203919c(a34, *(uint16_t *)(p + 0x84));
    s0 = func_0204f7d4(data_0213df18);
    func_02008f2c(a28, a34, 0, 10);
    r6 = 1;
    r4 = 0;
    if (func_020489ac(a28, data_020afc80) == 0) {
        r4 = 3;
    } else if (func_020489ac(a28, data_020afc8c) == 0) {
        s0 = func_0204f7ec(data_0213df18);
        r4 = 0;
    } else if (func_020489ac(a28, data_020afc98) == 0) {
        r4 = 1;
    } else if (func_020489ac(a28, data_020afca4) == 0) {
        s0 = func_0204f7ec(data_0213df18);
        r4 = 2;
    } else {
        r6 = 0;
    }

    if (r6) {
        func_02008f2c(a1c, a34, 0xa, -1);
        if (a1c[0] & 1) {
            cond = a1c[1];
        } else {
            cond = (((uint8_t *)a1c)[0] >> 1) & 0x7f;
        }
        if (cond) {
            r6 = 0;
            r7 = func_0205681c(0xb0);
            if (r7 != 0) {
                func_020095b8(a10, a1c);
                r7 = func_02009ba8(r7, s0, a10, r4);
                r6 = 1;
            }
            func_02056bc0(p + 0x14, r7);
            if (r6) {
                func_020059cc(a10);
            }
        }
        func_020059cc(a1c);
    } else {
        if (a34[0] & 1) {
            cond = a34[1];
        } else {
            cond = (((uint8_t *)a34)[0] >> 1) & 0x7f;
        }
        if (cond) {
            func_020095b8(a4, a34);
            func_02056bc0(p + 0x14, (void *)func_0203be48(func_0204f7ec(data_0213df18), a4, 0, p[0x86]));
            func_020059cc(a4);
        }
    }

    func_02056bc0(p + 0x14, (void *)func_02056aec(p));
    func_020059cc(a28);
    func_020059cc(a34);
}
