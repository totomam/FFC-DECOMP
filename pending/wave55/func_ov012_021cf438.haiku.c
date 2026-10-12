#include "ffc/types.h"

extern void func_02056c4c(void *p);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *a, void *b);
extern void *func_020655dc(void *a, int b, int c);
extern void *func_020655b8(void *a);
extern void func_ov012_021d0390(void *p, uint16_t v);
extern void *func_ov012_021d074c(void *p, int idx);
extern void func_02021338(int x);
extern void func_ov012_021ce750(void *p);
extern void *data_ov012_021d3c4c[];

typedef struct { uint32_t a; uint32_t b; } Pair;

void func_ov012_021cf438(uint8_t *p, uint8_t *s)
{
    uint32_t state;
    void **vt;
    void *obj;

    if (s == 0) {
        return;
    }

    state = *(uint32_t *)(s + 0x98);
    if (state < 2) {
        void *r7;
        void *tmp;
        void *sp0;
        Pair pr;

        void **w = (void **)p;
        func_02056c4c(w[0xb1]);
        func_02056c4c(w[0xaf]);

        state = *(uint32_t *)(s + 0x98);
        w[0xad] = func_0203b95c(data_ov012_021d3c4c[state], *(void **)(p + 0xb8), 0, 1);
        obj = w[0xad];
        vt = *(void ***)obj;
        ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 2, 0);

        pr.a = *(uint32_t *)(s + 0xa0);
        pr.b = *(uint32_t *)(s + 0xa4);
        obj = w[0xad];
        vt = *(void ***)obj;
        ((void (*)(void *, Pair))vt[3])(obj, pr);

        obj = w[0xad];
        vt = *(void ***)obj;
        ((void (*)(void *, uint32_t))vt[8])(obj, 1);

        obj = w[0xad];
        vt = *(void ***)obj;
        ((void (*)(void *))vt[10])(obj);

        func_02056bc0(w[0xaf], w[0xb1]);

        sp0 = func_020655dc(w[0xad], 1, 0);
        tmp = func_020655b8(w[0xad]);
        r7 = w[0xb1];
        func_02056bc0(r7, tmp);
        func_02056bc0(r7, sp0);

        *(uint32_t *)&w[0xb3] = *(uint32_t *)(s + 0xa0);
        *(uint32_t *)&w[0xb4] = *(uint32_t *)(s + 0xa4);
    }

    state = *(uint32_t *)(s + 0x98);
    switch (state) {
    case 0:
    case 1: {
        uint32_t idx = *(uint32_t *)(p + 0x2dc);
        uint8_t *e = p + 0x304 + idx * 12;
        uint16_t *arr;
        uint32_t k = *(uint32_t *)(s + 0x9c);
        if (*(uint32_t *)e & 1) {
            arr = *(uint16_t **)(e + 8);
        } else {
            arr = (uint16_t *)(e + 2);
        }
        func_ov012_021d0390(p, arr[k]);
        return;
    }
    case 2:
    case 3:
        return;
    case 4: {
        void *t;
        int i = *(int *)(p + 0x2dc);
        t = func_ov012_021d074c(p, i - 1);
        func_02056bc0(p + 0x14, t);
        return;
    }
    case 5: {
        void *t;
        int i = *(int *)(p + 0x2dc);
        t = func_ov012_021d074c(p, i + 1);
        func_02056bc0(p + 0x14, t);
        return;
    }
    case 0xf0:
    case 0xf1:
        *(uint8_t *)(p + 0x338) = *(uint8_t *)(s + 0x9c);
        func_02021338(0xb9);
        func_ov012_021ce750(p);
        return;
    case 0xf2: {
        void *t;
        t = func_ov012_021d074c(p, *(int *)(s + 0x9c));
        func_02056bc0(p + 0x14, t);
        return;
    }
    default:
        return;
    }
}
