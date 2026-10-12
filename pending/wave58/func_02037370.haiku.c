#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *p;
    uint32_t q;
    uint8_t flag;
} Tmp;

typedef struct {
    uint32_t w[3];
} Trip;

typedef struct {
    uint32_t w[2];
} Pair;

typedef struct {
    void **vt;
} Obj;

extern void *data_020b8e44;
extern void *data_020b93b8;

extern void func_02016f8c(Tmp *t, void *v);
extern char *func_02052d90(void *p, uint32_t q);
extern void func_02052d3c(void *p, uint32_t q);
extern void func_02052c04(void *p);
extern void func_02053290(void *o);
extern void func_0201afbc(void *o, void *out);
extern void func_02005988(void *o, void *p);
extern void func_020511e8(void *a, void *b);
extern void func_0200a7b0(void *a, void *b);
extern void func_0200a678(void *o);
extern void func_020059cc(void *o);
extern void func_0200a5dc(void *a, void *b);
extern void func_020685a0(void *a, void *b);
extern uint32_t func_02034bbc(void *ctx, uint32_t a, uint32_t b, void *c, void *d, uint32_t e, uint32_t f);

uint32_t func_02037370(uint32_t idx, void *b, void *ctx, Obj *obj)
{
    Tmp t;
    Trip v;
    uint32_t o[11];
    Trip xa, ya, xb, yb;
    Pair pa, rc;
    Trip pb;
    char *m, *cur, *p;
    uint32_t sel, ok, i, off;

    if (ctx == 0) {
        return 0;
    }
    func_02016f8c(&t, data_020b8e44);
    m = func_02052d90(t.p, t.q);
    if (*(uint32_t *)(m + 8) <= idx) {
        if (t.p != 0) {
            if (t.flag) {
                func_02052d3c(t.p, t.q);
            }
            func_02052c04(t.p);
        }
        func_02053290(&t);
        return 0;
    }
    m = func_02052d90(t.p, t.q);
    cur = m + ((uint32_t *)(m + *(uint32_t *)(m + 0xc)))[idx];
    func_0201afbc(data_020b93b8, o);
    for (i = 0; i < 3; i++) {
        v.w[i] = i;
    }
    sel = o[5] & 1;
    if (sel == 0) {
        off = *(uint32_t *)(cur + 0xc);
        p = cur + off;
        cur = *(char **)p;
        if (cur != 0) {
            func_02005988(&xa, p + ((uint32_t *)p)[1]);
            func_020511e8(&ya, &xa);
            func_0200a7b0(&v, &ya);
            func_0200a678(&ya);
            func_020059cc(&xa);
        }
    } else {
        off = *(uint32_t *)(cur + 0x10);
        p = cur + off;
        cur = *(char **)p;
        if (cur != 0) {
            func_02005988(&xb, p + ((uint32_t *)p)[1]);
            func_020511e8(&yb, &xb);
            func_0200a7b0(&v, &yb);
            func_0200a678(&yb);
            func_020059cc(&xb);
        }
    }
    if (cur == 0) {
        goto fail;
    }
    func_0200a5dc(&pb, &v);
    func_020685a0(&pa, b);
    ((void (*)(void *, void *))obj->vt[1])(&rc, obj);
    ok = func_02034bbc(ctx, pa.w[0], pa.w[1], &pb, cur, rc.w[0], rc.w[1]);
    func_0200a678(&pb);
    if (ok == 0) {
        func_0200a678(&v);
        if (t.p != 0) {
            if (t.flag) {
                func_02052d3c(t.p, t.q);
            }
            func_02052c04(t.p);
        }
        func_02053290(&t);
        return 0;
    }
fail:
    func_0200a678(&v);
    if (t.p != 0) {
        if (t.flag) {
            func_02052d3c(t.p, t.q);
        }
        func_02052c04(t.p);
    }
    func_02053290(&t);
    return 1;
}
