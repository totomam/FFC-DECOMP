#include "ffc/types.h"

extern void func_ov000_021653f4(void *p);
extern void func_ov000_02168738(void *p);
extern void func_ov001_0217c9e8(void *a, void *b);

typedef struct Sub {
    uint32_t pad0[2];
    void *p8;
    void *pc;
    void *p10;
    void *p14;
    uint32_t pad18[8];
    void *p38;
} Sub;

typedef struct B {
    uint32_t pad0[2];
    Sub *p8;
    Sub *pc;
    void *p10;
    void *p14;
    uint32_t u18;
    void *p1c;
    uint32_t f20;
    uint32_t pad24;
    uint32_t f28;
} B;

typedef struct A {
    uint8_t *ctx;
} A;

int func_ov001_02179a44(A *a, B *b)
{
    uint8_t *ctx = a->ctx;
    void *t;

    if (b->p8 != 0) {
        b->f28 = 1;
        func_ov000_021653f4(b->p8->p8);
        b->p8->p8 = 0;
        func_ov000_021653f4(b->p8->pc);
        b->p8->pc = 0;
        func_ov000_021653f4(b->p8);
        b->p8 = 0;
    }

    if (b->pc != 0) {
        b->f28 = 1;
        func_ov000_021653f4(b->pc->p8);
        b->pc->p8 = 0;
        func_ov000_021653f4(b->pc->pc);
        b->pc->pc = 0;
        func_ov000_021653f4(b->pc->p10);
        b->pc->p10 = 0;
        func_ov000_021653f4(b->pc->p14);
        b->pc->p14 = 0;
        if (b->pc->p38 != 0) {
            func_ov000_02168738(b->pc->p38);
            b->pc->p38 = 0;
        }
        func_ov000_021653f4(b->pc);
        b->pc = 0;
    }

    if (b->f20 != 0) {
        b->f28 = 1;
    }
    func_ov000_021653f4(b->p14);
    b->p14 = 0;
    func_ov000_021653f4(b->p1c);
    b->p1c = 0;
    b->u18 = 0;

    t = b->p10;
    if (t == 0 || (*(int32_t *)(ctx + 0x104) == 1 && b->f28 == 0)) {
        func_ov001_0217c9e8(a, b);
        return 0;
    }
    return 1;
}
