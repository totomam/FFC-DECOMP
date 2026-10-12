#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *self, void *s, uint32_t *p, uint32_t flag);
extern void *func_020059cc(void *object);
extern void func_02033420(void *self, void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void *func_02056aec(void *object);
extern void *data_020b8e44;

void func_ov007_0219ac04(uint8_t *a)
{
    uint32_t cnt = *(uint32_t *)(a + 0x88);
    *(uint32_t *)(a + 0x88) = *(uint32_t *)(a + 0x88) + 1;

    switch (cnt) {
    case 0: {
        void *o;
        void *m;
        uint32_t zero = 0;
        int flag = 0;
        uint32_t s18[3];
        uint32_t s0c[3];
        uint32_t s0[3];

        *(uint32_t *)(a + 0x84) = zero;
        o = func_0205681c(0xb8);
        if (o != 0) {
            m = func_020159c8(data_020b8e44, 0xef);
            func_02005988(s18, m);
            flag = 1;
            o = func_02033338(o, s18, (uint32_t *)(a + 0x84), zero);
        }
        if (flag != 0) {
            func_020059cc(s18);
        }
        m = func_020159c8(data_020b8e44, 0xf0);
        func_02005988(s0c, m);
        m = func_020159c8(data_020b8e44, 0xf1);
        func_02005988(s0, m);
        func_02033420(o, s0c, s0);
        func_020059cc(s0);
        func_020059cc(s0c);
        func_02056bc0(a + 0x14, o);
        break;
    }
    case 1: {
        if (*(uint32_t *)(a + 0x84) == 1) {
            func_02056bc0(a + 0x14, *(void **)(a + 0x80));
        } else {
            void *p = *(void **)(a + 0x80);
            if (p != 0) {
                if (p != 0) {
                    void **vt = *(void ***)p;
                    ((void (*)(void *))vt[1])(p);
                }
                *(void **)(a + 0x80) = 0;
            }
        }
        {
            void *r = func_02056aec(a);
            func_02056bc0(a + 0x14, r);
        }
        break;
    }
    }
}
