#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056bf4(void *a, void *b);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_020642e8(void *a, int b);
extern void func_ov002_021ba790(void *self, Pair v);
extern void func_ov002_021ba7bc(void *self);
extern void func_ov002_021ba7cc(void *self);
extern void func_02056bc0(void *o, void *n);

void func_ov002_021ba6a0(void *param_0, void *param_1)
{
    uint8_t *self = (uint8_t *)param_0;
    void *node = param_1;
    Pair saved;
    Pair out;
    int flag;
    void *p;
    void **vt;

    if (*(void **)(self + 0x90) == node) {
        return;
    }
    *(void **)(self + 0x90) = node;

    saved.a = *(uint32_t *)(self + 0x88);
    flag = 0;
    saved.b = *(uint32_t *)(self + 0x8c);

    p = *(void **)(self + 0x80);
    if (p != 0) {
        vt = *(void ***)p;
        ((void (*)(Pair *, void *))vt[4])(&out, p);
        saved.a = out.a;
        saved.b = out.b;

        p = *(void **)(self + 0x80);
        vt = *(void ***)p;
        if (((int (*)(void *))vt[12])(p) == 0) {
            flag = 1;
        }
        func_02056bf4(self + 0x48, *(void **)(self + 0x80));
        p = *(void **)(self + 0x80);
        if (p != 0) {
            if (p != 0) {
                vt = *(void ***)p;
                ((void (*)(void *))vt[1])(p);
            }
            *(void **)(self + 0x80) = 0;
        }
    }

    *(void **)(self + 0x80) = func_0203b95c(node, *(void **)(self + 0x84), 2, 1);
    func_020642e8(*(void **)(self + 0x80), 0);

    p = *(void **)(self + 0x80);
    vt = *(void ***)p;
    ((void (*)(void *, int))vt[8])(p, 2);
    p = *(void **)(self + 0x80);
    vt = *(void ***)p;
    ((void (*)(void *, int))vt[15])(p, 1);

    func_ov002_021ba790(self, saved);
    if (flag != 0) {
        func_ov002_021ba7bc(self);
    } else {
        func_ov002_021ba7cc(self);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0x80));
}
