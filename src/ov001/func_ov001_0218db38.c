/* cflags: -lang c++ */
#include "ffc/types.h"
struct VO { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void a(uint32_t x); virtual void b(); virtual void c(); };
extern "C" {

typedef struct Size { uint32_t w, h; } Size;
extern uint32_t func_0204f7d4(uint32_t object);
extern uint32_t func_0204f7ec(uint32_t object);
extern uint32_t func_0203bb08(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_0203c23c(void);
extern uint32_t func_0203c250(void);
extern void func_02060e80(uint32_t object);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *dst, uint32_t src);
extern uint32_t func_02033094(uint32_t obj, void *p, uint32_t a, Size sz, uint32_t c, uint32_t d);
extern uint32_t func_02032d24(uint32_t obj, Size sz, void *p, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern uint32_t func_02056aec(void *object);
extern uint8_t data_ov001_02194990[];
extern uint8_t data_ov001_021949a0[];
extern uint32_t data_0213df18;
extern uint32_t data_020b8e44;

void func_ov001_0218db38(uint8_t *s)
{
    uint32_t loc0[3];
    uint32_t loc1[3];
    uint32_t loc2[3];
    Size sz0;
    Size sz2;
    uint32_t r4, r6, r7;
    uint32_t v;
    uint32_t cur;

    v = *(uint32_t *)(s + 0x88);
    if (v == 0 || v != 1) {
        r6 = (uint32_t)data_ov001_02194990;
    } else {
        r6 = (uint32_t)data_ov001_021949a0;
    }

    if (s[0x8c] != 0) {
        r4 = 0;
    } else {
        r4 = func_0203bb08(func_0204f7d4(data_0213df18), r6, 1, 0, 0);
    }


    r7 = 0;
    r6 = func_0203bb08(func_0204f7ec(data_0213df18), r6, 1, r7, r7);
    if (r4 != 0) {
        func_02056bc0(s + 0x48, r4);
        ((VO *)r4)->a(r7);
        ((VO *)r4)->c();
        func_02060e80(func_0203c23c());
    }

    if (r6 != 0) {
        func_02056bc0(s + 0x48, r6);
        ((VO *)r6)->a(1);
        ((VO *)r6)->c();
        func_02060e80(func_0203c250());
    }

    switch (*(uint32_t *)(s + 0x84)) {
    case 1:
        r7 = 0;
        r4 = 0;
        cur = func_0205681c(0xa4);
        if (cur != 0) {
            sz0.w = 0x80;
            sz0.h = 0x60;
            func_02005988(loc0, func_020159c8(data_020b8e44, *(uint32_t *)(s + 0x80)));
            r4 = 1;
            cur = func_02033094(cur, loc0, r7, sz0, 4, r7);
        }
        func_02056bc0(s + 0x14, cur);
        if (r4 != 0) {
            func_020059cc(loc0);
        }
        break;
    case 0:
        r7 = 0;
        r4 = 0;
        cur = func_0205681c(0xa4);
        if (cur != 0) {
            sz0.w = 0x80;
            sz0.h = 0x60;
            func_02005988(loc1, func_020159c8(data_020b8e44, *(uint32_t *)(s + 0x80)));
            r4 = 1;
            cur = func_02033094(cur, loc1, 1, sz0, 4, r7);
        }
        func_02056bc0(s + 0x14, cur);
        if (r4 != 0) {
            func_020059cc(loc1);
        }
        break;
    case 2:
        r7 = 0;
        r4 = 0;
        cur = func_0205681c(0xb0);
        if (cur != 0) {
            func_02005988(loc2, func_020159c8(data_020b8e44, *(uint32_t *)(s + 0x80)));
            sz2.w = 0x80;
            sz2.h = 0x60;
            r4 = 1;
            cur = func_02032d24(cur, sz2, loc2, 4, r7);
        }
        func_02056bc0(s + 0x14, cur);
        if (r4 != 0) {
            func_020059cc(loc2);
        }
        break;
    default:
        break;
    }

    cur = func_02056aec(s);
    func_02056bc0(s + 0x14, cur);
}

}
