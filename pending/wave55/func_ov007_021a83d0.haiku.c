#include "ffc/types.h"

extern uint64_t func_0201b7b0(uint32_t x);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_02016b68(void *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(uint32_t lo, uint32_t hi);
extern void func_02052c04(uint32_t x);
extern void func_02053290(void *o);
extern void func_ov007_021a7acc(void *self, void *p);
extern void func_ov007_021a7c30(void *self);
extern void func_ov007_021a860c(void **out, void *a, void *b);
extern uint32_t func_0206c270(uint32_t x);
extern uint32_t func_0206d7f4(uint32_t x, uint32_t y, void *z);
extern uint32_t func_0206d774(uint32_t x);
extern void func_02056bc0(void *obj, uint32_t node);
extern void func_0206cdf0(uint32_t x, uint16_t y);

extern uint32_t data_020b93b8;
extern uint32_t data_020b8e44;
extern uint32_t data_ov007_021c46dc[2];
extern uint32_t data_ov007_021c46e4[2];
extern uint32_t data_ov007_021c46ec[2];
extern uint32_t data_ov007_021c46f4[2];
extern uint32_t data_ov007_021c46fc[2];
extern uint32_t data_ov007_021c4704[2];

void func_ov007_021a83d0(void *a0, void *a1) {
    uint8_t *self = (uint8_t *)a0;
    uint8_t *p = (uint8_t *)a1;
    void *sel;
    struct Tmp {
        uint32_t pad;
        uint32_t lo;
        uint32_t hi;
        uint8_t flag;
    } tmp;
    uint32_t state = *(uint32_t *)(p + 0xc);

    if (state == 0) {
        if (*(uint32_t *)(self + 0xf0) != 0) {
            return;
        }
        func_02084ca4(p + 0x84, self + 0x104, 6);
        func_ov007_021a860c(&sel, self + 0xf8, self + 0x104);
        if (sel != self + 0xfc) {
            return;
        }
        goto common;
    } else if (state == 5) {
        if (*(uint32_t *)(self + 0xf0) != 1) {
            return;
        }
        func_02084ca4(p + 0x2a, self + 0x104, 6);
        func_ov007_021a860c(&sel, self + 0xf8, self + 0x104);
        if (sel != self + 0xfc) {
            func_0206cdf0(*(uint32_t *)(self + 0xc8), *(uint16_t *)(p + 0x10));
            return;
        }
        func_02084ca4(p + 0x12, self + 0x124, 0x18);
        {
            uint32_t r = func_0206c270(*(uint32_t *)(self + 0xc8));
            func_02056bc0(self + 0x14, r);
        }
        {
            uint32_t *d = data_ov007_021c46fc;
            uint32_t *e = data_ov007_021c4704;
            *(uint32_t *)(self + 0xc0) = d[0];
            *(uint32_t *)(self + 0xc4) = d[1];
            *(uint32_t *)(self + 0xb8) = e[0];
            *(uint32_t *)(self + 0xbc) = e[1];
        }
        return;
    } else if (state == 0x1a) {
        uint64_t now = func_0201b7b0(data_020b93b8);
        uint64_t t = ((uint64_t)*(uint32_t *)(self + 0x144) << 32) | *(uint32_t *)(self + 0x140);
        uint16_t adj;
        void *mar;
        if (now < t) {
            return;
        }
        func_02084ca4(p + 0x84, self + 0x104, 6);
        func_02016b68(&tmp, data_020b8e44);
        mar = func_02052d90((void *)tmp.lo, tmp.hi);
        adj = *(uint16_t *)((uint8_t *)mar + 6);
        {
            uint64_t base = func_0201b7b0(data_020b93b8);
            uint64_t nt = base + (int64_t)(int32_t)adj;
            *(uint32_t *)(self + 0x140) = (uint32_t)nt;
            *(uint32_t *)(self + 0x144) = (uint32_t)(nt >> 32);
        }
        if (tmp.lo != 0) {
            if (tmp.flag != 0) {
                func_02052d3c(tmp.lo, tmp.hi);
            }
            func_02052c04(tmp.lo);
        }
        func_02053290(&tmp);
        *(uint8_t *)(self + 0x168) = 1;
        func_ov007_021a7acc(self, self + 0x150);
        *(uint16_t *)(self + 0x128) = 0;
        func_ov007_021a7c30(self);
        *(uint32_t *)(self + 0xc0) = data_ov007_021c46dc[0];
        *(uint32_t *)(self + 0xc4) = data_ov007_021c46dc[1];
        *(uint32_t *)(self + 0xb8) = data_ov007_021c46e4[0];
        *(uint32_t *)(self + 0xbc) = data_ov007_021c46e4[1];
        return;
    } else {
        return;
    }

common:
    func_02084ca4(p + 0x14, self + 0x124, 0x18);
    {
        uint32_t c8 = *(uint32_t *)(self + 0xc8);
        uint32_t r7 = func_0206c270(c8);
        uint32_t r6 = func_0206d7f4(c8, *(uint32_t *)(p + 0x10), self + 0x10c);
        uint32_t r1 = func_0206d774(c8);
        func_02056bc0(self + 0x14, r1);
        func_02056bc0(self + 0x14, r6);
        func_02056bc0(self + 0x14, r7);
    }
    *(uint32_t *)(self + 0xc0) = data_ov007_021c46ec[0];
    *(uint32_t *)(self + 0xc4) = data_ov007_021c46ec[1];
    *(uint32_t *)(self + 0xb8) = data_ov007_021c46f4[0];
    *(uint32_t *)(self + 0xbc) = data_ov007_021c46f4[1];
}
