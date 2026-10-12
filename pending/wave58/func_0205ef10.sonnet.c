#include "ffc/types.h"

typedef struct { int32_t w0, w1, w2, w3; } V4;
typedef struct Obj { void **vt; int32_t a; V4 r; } Obj;
typedef struct S {
    uint8_t pad0[0x18];
    uint8_t *o18;
    int32_t x1c, x20;
    V4 old;
    V4 cur;
    Obj **base;
    uint32_t cnt;
    uint8_t pad4c[4];
    uint8_t A[0x18];
    uint8_t B[0x18];
} S;

extern void func_02053ba0(void *o, V4 v);
extern int func_02053c80(void *o);
extern void func_02053770(void *o, V4 v);
extern void func_020538f8(void *o, V4 v);
extern void func_02053868(void *o, void *o2);
extern void func_02053644(void *o, void *o2);
extern uint32_t func_02053754(void *o);
extern V4 func_02053758(void *o, uint32_t i);
extern void func_02053b64(void *o, void *o2);
extern void func_02053c90(void *o);

void func_0205ef10(S *p) {
    int32_t loc[2];
    int32_t v1 = p->x1c;
    int32_t v2 = p->x20;
    loc[0] = v1; loc[1] = v2;
    *(int32_t *)(p->o18 + 0x1c) = v1;
    *(int32_t *)(p->o18 + 0x20) = v2;
    p->old.w0 = p->cur.w0;
    p->old.w1 = p->cur.w1;
    p->old.w2 = p->cur.w2;
    p->old.w3 = p->cur.w3;
    p->cur.w0 = p->x1c >> 3;
    p->cur.w1 = p->x20 >> 3;
    p->cur.w2 = (p->x1c + 0x107) >> 3;
    p->cur.w3 = (p->x20 + 0xc7) >> 3;
    func_02053ba0(p->B, p->cur);
    if (p->cur.w0 == p->old.w0 && p->cur.w1 == p->old.w1 &&
        p->cur.w2 == p->old.w2 && p->cur.w3 == p->old.w3) {
        if (func_02053c80(p->B)) return;
    }
    func_02053770(p->A, p->cur);
    func_020538f8(p->A, p->old);
    func_02053868(p->A, p->B);
    Obj **end = p->base + p->cnt;
    while (end != p->base) {
        func_02053644(p->B, p->A);
        V4 s3;
        s3.w0 = (*(end - 1))->r.w0; s3.w1 = (*(end - 1))->r.w1; s3.w2 = (*(end - 1))->r.w2; s3.w3 = (*(end - 1))->r.w3;
        func_02053ba0(p->B, s3);
        if (!func_02053c80(p->B)) {
            uint32_t i;
            for (i = 0; i < func_02053754(p->B); i++) {
                V4 t = func_02053758(p->B, i);
                Obj *o = *(end - 1);
                ((void (*)(Obj *, void *, V4))o->vt[2])(o, p->o18, t);
            }
            func_02053b64(p->A, p->B);
            if (func_02053c80(p->A)) break;
        }
        end--;
    }
    func_02053c90(p->B);
}
