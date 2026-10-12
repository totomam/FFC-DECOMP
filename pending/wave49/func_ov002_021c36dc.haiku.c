#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_0203b6fc(void);
extern uint32_t func_02062a78(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d71a8[];
extern uint32_t data_ov002_021d71b8[];

void func_ov002_021c36dc(uint8_t *self, int32_t p1, int32_t p2)
{
    uint8_t *obj;
    uint8_t *sub;
    int32_t flag;
    int32_t skip;
    void *ctx;
    void *X;
    void **vt;
    uint32_t v50[2];
    uint32_t v58[2];
    uint32_t v60[2];
    uint32_t cur;
    uint32_t *tbl;
    uint32_t r;

    obj = *(uint8_t **)(self + 0xd4);
    flag = obj[0x12];
    sub = obj;
    sub += 0x1c;
    if (flag != 0) {
        func_0208763c(sub);
    }
    skip = 1;
    if (*(uint32_t *)(obj + 0x14) != 0) {
        skip = 0;
    }
    if (flag != 0) {
        func_02087678(sub);
    }
    if (skip == 0) {
        goto skipped;
    }
    goto end;

skipped:
    ctx = func_0203b6fc();
    X = *(void **)(self + 0xdc);
    vt = *(void ***)X;
    ((void (*)(void *, int32_t, int32_t))vt[14])(X, p1, 0);

    if (*(int32_t *)(self + 0x84) == p2) {
        uint32_t s0[2];
        uint32_t s1[2];
        vt = *(void ***)X;
        ((void (*)(uint32_t *, void *))vt[4])(v50, X);
        v60[0] = v50[0];
        v60[1] = v50[1];
        if (p2 == 0) {
            s0[0] = 0x20;
            s0[1] = 0xa0;
            v58[0] = s0[0];
            v58[1] = s0[1];
        } else {
            s1[0] = 0xe0;
            s1[1] = 0xa0;
            v58[0] = s1[0];
            v58[1] = s1[1];
        }
    } else {
        uint32_t a0[2];
        uint32_t a1[2];
        uint32_t a2[2];
        uint32_t a3[2];
        if (p2 == 0) {
            a0[0] = (uint32_t)-0x20;
            a0[1] = 0xa0;
            v60[0] = a0[0];
            v60[1] = a0[1];
        } else {
            a1[0] = 0x120;
            a1[1] = 0xa0;
            v60[0] = a1[0];
            v60[1] = a1[1];
        }
        if (p2 == 0) {
            a2[0] = 0x20;
            a2[1] = 0xa0;
            v58[0] = a2[0];
            v58[1] = a2[1];
        } else {
            a3[0] = 0xe0;
            a3[1] = 0xa0;
            v58[0] = a3[0];
            v58[1] = a3[1];
        }

        cur = *(uint32_t *)(self + 0x84);
        tbl = data_ov002_021d71a8;
        r = func_02062a78(*(void **)(self + 0xd8),
                          tbl[cur * 2], tbl[cur * 2 + 1],
                          tbl[p2 * 2], tbl[p2 * 2 + 1], 10, 12);
        func_02056bc0(ctx, (void *)r);
        tbl = data_ov002_021d71b8;
        r = func_02062a78(*(void **)(self + 0xe0),
                          tbl[cur * 2], tbl[cur * 2 + 1],
                          tbl[p2 * 2], tbl[p2 * 2 + 1], 10, 12);
        func_02056bc0(ctx, (void *)r);
    }

    X = *(void **)(self + 0xdc);
    vt = *(void ***)X;
    ((void (*)(void *, uint32_t, uint32_t))vt[3])(X, v60[0], v60[1]);
    r = func_02062a78(X, v60[0], v60[1], v58[0], v58[1], 10, 12);
    func_02056bc0(ctx, (void *)r);
    func_02056bc0(*(void **)(self + 0xd0), ctx);

end:
    if (p1 != -1) {
        *(int32_t *)(self + 0x80) = p1;
    }
    *(int32_t *)(self + 0x84) = p2;
}
