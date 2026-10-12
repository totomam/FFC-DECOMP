#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_0205f574(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02056c9c(void *p, uint32_t v);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void *func_0203ba60(void *a, Pair st, void *d, uint32_t e);
extern void func_02067e70(void *p, uint32_t v);
extern uintptr_t func_020159f8(uintptr_t x);
extern uint32_t func_02015a38(uintptr_t x, uint32_t y, uint32_t z, uint32_t w);
extern void *func_0203b878(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);
extern char data_ov013_021c49bc[];
extern void *data_ov013_021c4898[];
extern uintptr_t data_020b8e44;
extern uint32_t data_ov013_021c4b20[];

void func_ov013_021c0dfc(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t i;
    uint32_t j;
    uint32_t off;
    uint8_t *r4;

    void *p88;
    void *sub;
    void *p;
    void *tmp;
    void *obj;
    void *obj2;
    void **vt;
    Pair st;

    p = func_0205681c(0x50);
    if (p != 0) {
        p = func_0205f574(p, 0x3c, 0, 1);
    }
    *(void **)(s + 0x88) = p;

    sub = s + 0x48;
    for (i = 0; i < 3; i++) {
        off = i << 3;
        *(uint8_t *)(s + off + 0x8c) = 0;
        r4 = (uint8_t *)func_0205681c(0x94);
        if (r4 != 0) {
            p88 = *(void **)(s + 0x88);
            func_02056c9c(r4, 0);
            *(void **)r4 = data_ov013_021c49bc;
            for (j = 0; j < 3; j++) {
                *(uint32_t *)(r4 + 0x88 + j * 4) = 0;
            }
            tmp = func_0203b95c(data_ov013_021c4898[2], p88, 0, 1);
            *(void **)(r4 + 0x80) = tmp;
            obj = *(void **)(r4 + 0x80);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t, uint32_t))vt[14])(obj, 3, 0);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t))vt[15])(obj, 3);
            vt = *(void ***)obj;
            ((void (*)(void *, uint32_t))vt[8])(obj, 3);

            st.a = 0x30;
            st.b = 0xc;
            tmp = (void *)func_020159f8(data_020b8e44);
            obj2 = func_0203ba60(p88, st, tmp, 1);
            vt = *(void ***)obj2;
            ((void (*)(void *, uint32_t))vt[8])(obj2, 3);
            func_02067e70(obj2, 2);
            *(void **)(r4 + 0x84) = func_0203b878(obj2, func_02015a38(data_020b8e44, 0, 1, 0xb));
            func_02056bc0(r4 + 0x48, *(void **)(r4 + 0x80));
            func_02056bc0(r4 + 0x48, *(void **)(r4 + 0x84));
        }
        *(void **)(s + off + 0x90) = r4;
        func_02056bc0(sub, *(void **)(s + off + 0x90));
    }

    func_02056bc0(s + 0x48, *(void **)(s + 0x88));
    *(uint32_t *)(s + 0x80) = data_ov013_021c4b20[0];
    *(uint32_t *)(s + 0x84) = data_ov013_021c4b20[1];
}
