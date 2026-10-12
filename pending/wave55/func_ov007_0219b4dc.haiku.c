#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_ov007_0219b224(void *self);
extern void *func_ov007_0219abd0(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *self);
extern void *func_ov007_0219b778(void *self, uint32_t a, uint32_t b);
extern void *func_ov007_0219aab0(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov007_0219a8bc(uint32_t x);
extern void *func_ov007_0219b730(void *self, uint32_t a, uint32_t b, uint32_t c);
extern void *func_ov007_0219abdc(void *a, void *b);
extern void *func_ov007_0219a9e8(uint32_t x);
extern void func_0201af38(void *obj, uint32_t key);
extern void func_0201af7c(void *obj, uint32_t key, void *out);
extern uint32_t func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *obj, uint32_t v);
extern void *func_0203357c(void *obj, void *a, void *b, uint32_t c);
extern void func_020059cc(void *obj);
extern void func_02033628(void *obj, uint32_t v);
extern void func_02033604(void *obj, void *a, void *b, void *c);
extern uint32_t data_ov007_021c2bf4[2];
extern uint32_t data_ov007_021c2bfc[2];
extern void *data_020b93b8;
extern void *data_020b8e44;
extern uint32_t data_ov007_021c2c04[2];

void func_ov007_0219b4dc(uint8_t *self, uint32_t r4)
{
    uint32_t out[6];
    uint32_t t1[8], t2[3], t3[3], t4[3];
    void *n;
    void *t;

    if (r4 == *(uint32_t *)(self + 0xc8)) {
        if (self[0xd0]) {
            func_02021338(0xce);
            func_ov007_0219b224(self);
            n = func_ov007_0219abd0(*(uint32_t *)(self + 0xc8));
            func_02056bc0(self + 0x14, n);
            return;
        }
        func_02021338(0xce);
        **(uint32_t **)(self + 0xb8) = 2;
        t = func_02056aec(self);
        n = func_ov007_0219abd0(*(uint32_t *)(self + 0xc8));
        func_02056bc0(self + 0x14, n);
        func_02056bc0(self, t);
        return;
    }

    if (*(uint32_t *)(self + 0xcc) != 0 && r4 == *(uint32_t *)(self + 0xcc)) {
        func_02021338(0xcf);
        t = func_ov007_0219b778(self, data_ov007_021c2bf4[0], data_ov007_021c2bf4[1]);
        n = func_ov007_0219aab0(*(uint32_t *)(self + 0xcc));
        func_02056bc0(self + 0x14, n);
        func_02056bc0(self, t);
        return;
    }

    if (r4 != *(uint32_t *)(self + 0xc0) && r4 != *(uint32_t *)(self + 0xc4)) {
        t = func_02056aec(self);
        func_02056bc0(self + 0x14, t);
        return;
    }

    func_02021338(0xcf);
    if (self[0xd0]) {
        void *r6 = func_0205681c(0x8c);
        if (r6) {
            uint32_t r7 = func_ov007_0219a8bc(r4);
            void *r1 = func_ov007_0219b730(self, data_ov007_021c2bfc[0], data_ov007_021c2bfc[1], (void *)r7);
            r6 = func_ov007_0219abdc(r6, r1);
        }
        n = func_ov007_0219a9e8(r4);
        func_02056bc0(self + 0x14, n);
        func_02056bc0(self, r6);
        return;
    }

    {
        uint32_t r6 = func_ov007_0219a8bc(r4);
        func_0201af38(data_020b93b8, r6);
        **(uint32_t **)(self + 0xb8) = 0;
        n = func_ov007_0219a9e8(r4);
        func_02056bc0(self + 0x14, n);
        func_0201af7c(data_020b93b8, r6, out);
        if ((out[5] >> 1) & 1)
            goto L22c;
        func_0201af7c(data_020b93b8, r6 ^ 1, out);
        if (!((out[5] >> 31) & 1))
            goto L22c;

        {
            uint32_t have = 0;
            void *obj = func_0205681c(0xc4);
            if (obj) {
                uint32_t v = func_020159c8(data_020b8e44, 0xf2);
                func_02005988(t1, v);
                obj = func_0203357c(obj, t1, self + 0xdc, 0);
                have = 1;
            }
            if (have)
                func_020059cc(t1);
            func_02033628(obj, 1);
            {
                uint32_t v = func_020159c8(data_020b8e44, 0xf3);
                func_02005988(t2, v);
            }
            {
                uint32_t v = func_020159c8(data_020b8e44, 0xf4);
                func_02005988(t3, v);
            }
            {
                uint32_t v = func_020159c8(data_020b8e44, 0xf5);
                func_02005988(t4, v);
            }
            func_02033604(obj, t2, t3, t4);
            func_020059cc(t4);
            func_020059cc(t3);
            func_020059cc(t2);
            t = func_ov007_0219b778(self, data_ov007_021c2c04[0], data_ov007_021c2c04[1]);
            func_02056bc0(self + 0x14, obj);
            func_02056bc0(self + 0x14, t);
            return;
        }
    }

L22c:
    t = func_02056aec(self);
    func_02056bc0(self + 0x14, t);
}
