#include "ffc/types.h"

extern uint32_t func_0204f7d4(const void *object);
extern uint32_t func_0204f7ec(const void *object);
extern uint32_t func_0203bb08(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern void func_02056bc0(void *object, uint32_t node);
extern uint32_t func_0203c23c(void);
extern uint32_t func_0203c250(void);
extern void func_02060e80(uint32_t object);
extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_020159c8(uint32_t a, uint32_t b);
extern void func_02005988(void *dst, uint32_t src);
extern uint32_t func_02033094(uint32_t obj, void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_02032d24(uint32_t obj, uint32_t a, uint32_t b, void *p, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern uint32_t func_02056aec(void *object);
extern uint8_t data_ov001_02194990[];
extern uint8_t data_ov001_021949a0[];
extern uint32_t data_0213df18;
extern uint32_t data_020b8e44;

void func_ov001_0218db38(uint8_t *s)
{
    uint32_t loc0[4];
    uint32_t loc1[3];
    uint32_t loc2[3];
    uint32_t sz0[2];
    uint32_t sz1[2];
    uint32_t sz2[2];
    uint32_t r4, r6, r7;
    uint32_t v;
    uint32_t cur;
    uint32_t *vt;

    v = *(uint32_t *)(s + 0x88);
    if (v == 0) {
        r6 = (uint32_t)data_ov001_02194990;
    } else if (v == 1) {
        r6 = (uint32_t)data_ov001_021949a0;
    } else {
        r6 = (uint32_t)data_ov001_02194990;
    }

    if (s[0x8c] != 0) {
        r4 = 0;
    } else {
        r4 = func_0203bb08(func_0204f7d4(data_0213df18), r6, 1, 0, 0);
    }

    r6 = func_0203bb08(func_0204f7ec(data_0213df18), r6, 1, 0, 0);

    if (r4 != 0) {
        func_02056bc0(s + 0x48, r4);
        vt = *(uint32_t **)r4;
        ((void (*)(uint32_t, uint32_t))vt[8])(r4, 0);
        vt = *(uint32_t **)r4;
        ((void (*)(uint32_t))vt[10])(r4);
        func_02060e80(func_0203c23c());
    }

    if (r6 != 0) {
        func_02056bc0(s + 0x48, r6);
        vt = *(uint32_t **)r6;
        ((void (*)(uint32_t, uint32_t))vt[8])(r6, 1);
        vt = *(uint32_t **)r6;
        ((void (*)(uint32_t))vt[10])(r6);
        func_02060e80(func_0203c250());
    }

    r7 = 0;
    switch (*(uint32_t *)(s + 0x84)) {
    case 0:
        cur = func_0205681c(0xa4);
        if (cur != 0) {
            sz1[0] = 0x80;
            sz1[1] = 0x60;
            func_02005988(loc1, func_020159c8(data_020b8e44, *(uint32_t *)(s + 0x80)));
            cur = func_02033094(cur, loc1, 1, sz1[0], sz1[1], 4, 0);
            r4 = 1;
        } else {
            r4 = 0;
        }
        func_02056bc0(s + 0x14, cur);
        if (r4 != 0) {
            func_020059cc(loc1);
        }
        break;
    case 1:
        cur = func_0205681c(0xa4);
        if (cur != 0) {
            sz0[0] = 0x80;
            sz0[1] = 0x60;
            func_02005988(loc0, func_020159c8(data_020b8e44, *(uint32_t *)(s + 0x80)));
            cur = func_02033094(cur, loc0, 0, sz0[0], sz0[1], 4, 0);
            r4 = 1;
        } else {
            r4 = 0;
        }
        func_02056bc0(s + 0x14, cur);
        if (r4 != 0) {
            func_020059cc(loc0);
        }
        break;
    case 2:
        cur = func_0205681c(0xb0);
        if (cur != 0) {
            sz2[0] = 0x80;
            sz2[1] = 0x60;
            func_02005988(loc2, func_020159c8(data_020b8e44, *(uint32_t *)(s + 0x80)));
            cur = func_02032d24(cur, sz2[0], sz2[1], loc2, 4, 0);
            r4 = 1;
        } else {
            r4 = 0;
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
