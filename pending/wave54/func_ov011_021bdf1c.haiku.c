#include "ffc/types.h"

extern void func_02036750(void *p);
extern void func_0201f1f0(void *a, uint8_t b, void *c);
extern int func_02036890(void *p);
extern void *func_02056aec(void *p);
extern void *func_0203bf90(int n);
extern void *func_0203b6fc(void);
extern void func_02056bc0(void *object, void *node);
extern void func_ov011_021be8c4(void *self, uint8_t idx);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern void *func_02033338(void *a, void *b, void *c, int d);
extern void *func_020059cc(void *object);
extern void func_02033438(void *a, int b);
extern void *func_02062a30(void *owner);
extern void *func_ov011_021be094(void *self, uint32_t a, uint32_t b, uint8_t idx);
extern void func_ov011_021be0dc(void *self, uint8_t idx);
extern void func_020367a8(void *p);
extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov011_021caccc[];

void func_ov011_021bdf1c(void *self, uint32_t id)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t i;
    uint8_t idx;
    uint32_t sz;
    void *alloc;
    uint32_t sbuf[3];
    uint32_t loc[0x58 / 4];
    int16_t state;

    for (i = 0; i < 3; i++) {
        if (id == ((uint32_t *)(s + 0xc4))[i]) {
            ;
            idx = (uint8_t)(i + 1);
            func_02036750((void *)loc);
            func_0201f1f0(data_020b93b8, idx, loc);
            state = *(int16_t *)(s + 0x122);
            if (state == 0) {
                *(uint16_t *)(s + 0x120) = idx;
                if (!func_02036890((void *)loc)) {
                    **(int **)(s + 0x114) = *(int16_t *)(s + 0x120) + 0x12c;
                    {
                        void *r6v = func_02056aec(self);
                        void *n = func_0203bf90(30);
                        void *b6 = func_0203b6fc();
                        func_02056bc0(b6, n);
                        s += 0x14;
                        func_02056bc0(s, b6);
                        func_02056bc0(s, r6v);
                    }
                } else {
                    func_ov011_021be8c4(self, idx);
                }
            } else if (state == 1) {
                uint32_t v;
                uint8_t *o = *(uint8_t **)(s + 0x110);
                v = *(uint32_t *)(o + 0xc);
                v = (v & ~0xffu) | 2u;
                *(uint32_t *)(o + 0xc) = v;
                if (func_02036890((void *)loc)) {
                    void *obj = *(void **)(s + 0xf8);
                    ((void (*)(void *))((*(void ***)obj)[11]))(obj);
                    *(uint32_t *)(s + 0x11c) = 0;
                    sz = 0xb8;
                    alloc = func_0205681c(sz);
                    if (alloc) {
                        void *x = func_020159c8(data_020b8e44, 0x1c4);
                        func_02005988(sbuf, x);
                        sz += 0x64;
                        alloc = func_02033338(alloc, sbuf, s + sz, 0);
                        func_020059cc(sbuf);
                    }
                    func_02033438(alloc, 1);
                    {
                        void *o2 = func_02062a30(*(void **)(s + 0xf8));
                        void *r4v = func_ov011_021be094(self, data_ov011_021caccc[0], data_ov011_021caccc[1], idx);
                        s += 0x14;
                        func_02056bc0(s, alloc);
                        func_02056bc0(s, r4v);
                        func_02056bc0(s, o2);
                    }
                } else {
                    func_ov011_021be0dc(self, idx);
                }
            }
            func_020367a8((void *)loc);
            return;
        }
    }
}
