#include "ffc/types.h"

extern void *func_ov002_02195fa4(void *a, void *b);
extern void *func_ov002_02198700(void *a, void *b);
extern void *func_020487a0(void *container, void *position, uint32_t v);
extern void func_02055b88(void *a, void *b);
extern void func_02056bf4(void *a, void *b);
extern int func_ov002_021c86fc(void *a, void *b);
extern void func_ov002_021c8710(void *a, void *b);

typedef struct { uint8_t b; } Flag;

void func_ov002_021a3924(uint8_t *self, void *p) {
    void *r;
    void **it;
    void **begin;
    void **end;
    uint32_t flag;
    Flag f;
    void *r1;

    r = func_ov002_02198700(func_ov002_02195fa4(*(void **)(self + 0xf4), p), p);
    if (r == 0) {
        return;
    }
    begin = *(void ***)(self + 0x11c);
    end = begin + *(uint32_t *)(self + 0x120);
    it = begin;
    flag = 1;
    while (flag != 0) {
        flag = 0;
        if (it != end) {
            if (*it != r) {
                flag = 1;
            }
        }
        if (flag != 0) {
            it++;
        }
    }
    f.b = 0;
    func_020487a0(self + 0x11c, it, *(uint32_t *)&f);
    r1 = (void *)((uint8_t *)r + 0x80);
    func_02055b88(self + 0xc4, r1);
    func_02056bf4(self + 0x48, r);
    if (func_ov002_021c86fc(*(void **)(self + 0x180), r)) {
        func_ov002_021c8710(*(void **)(self + 0x180), r);
        return;
    }
    {
        void **vt = *(void ***)r;
        ((void (*)(void *))vt[1])(r);
    }
}
