#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *mar;
    uint32_t idx;
    uint8_t flag;
} Handle;

typedef struct {
    uint32_t f0;
    void *f4;
    uint32_t f8;
    uint32_t fc;
} Ctx;

extern void *data_020b93b8;
extern void *data_020b8e44;
extern void *data_0213df20;

extern int func_0201bd84(void *a, uint32_t b);
extern void func_0201bcf4(void *a, uint32_t b, uint32_t c);
extern void func_02018644(void *h, void *v);
extern void *func_02052d90(void *mar, uint32_t idx);
extern void func_02052d3c(void *mar, uint32_t idx);
extern void func_02052c04(void *mar);
extern void func_02053290(void *h);
extern void func_0203919c(void *y, uint32_t v);
extern void func_020424e0(void *p);
extern uint32_t func_ov003_021464ac(void);
extern void *func_0203be48(void *a, void *y, uint32_t b, uint32_t c);
extern void func_020059cc(void *y);
extern void *func_0203b688(void);
extern void *func_0205681c(uint32_t sz);
extern void *func_02047588(void *p, void *f4, uint32_t a, uint32_t b);
extern uint32_t func_ov003_0214d9fc(void);
extern void func_02056bc0(void *a, void *b);
extern uint32_t func_02017fa8(void *a);
extern int func_0201bfa4(void *a, uint32_t b);
extern uint32_t func_ov003_0214d9c0(void);
extern void *func_02047920(void *p, void *f4, uint32_t a, uint32_t b);

void *func_ov003_021727c4(Ctx *ctx, uint32_t mode, uint32_t *out)
{
    void *a;
    switch (mode) {
    case 0: {
        uint32_t y[3];
        Handle h;
        Handle *hp;
        uint32_t k;
        uint32_t v;
        void *m;
        uint32_t r2;
        uint32_t *yp;

        if (func_0201bd84(data_020b93b8, 0x3e)) {
            k = 7;
        } else {
            func_0201bcf4(data_020b93b8, 0x3e, 1);
            k = 6;
        }
        hp = &h;
        func_02018644(hp, data_020b8e44);
        func_02052d90(hp->mar, hp->idx);
        m = func_02052d90(hp->mar, hp->idx);
        v = *(uint16_t *)((uint8_t *)m + *(uint32_t *)((uint8_t *)m + 8) + k * 2);
        if (hp->mar != 0) {
            if (hp->flag) {
                func_02052d3c(hp->mar, hp->idx);
            }
            func_02052c04(hp->mar);
        }
        func_02053290(hp);
        yp = y;
        func_0203919c(yp, v);
        func_020424e0(ctx->f4);
        r2 = func_ov003_021464ac();
        a = func_0203be48(data_0213df20, yp, r2, 0);
        func_020059cc(yp);
        return a;
    }
    case 1: {
        void *p;
        a = func_0203b688();
        p = func_0205681c(0x98);
        if (p != 0) {
            p = func_02047588(p, ctx->f4, 2, 0);
        }
        func_020424e0(ctx->f4);
        func_02056bc0(a, (void *)func_ov003_0214d9fc());
        func_02056bc0(a, p);
        return a;
    }
    case 2: {
        uint32_t i;
        uint32_t cnt = 0;
        void *b;
        void *m;
        uint32_t k;

        i = 1;
        if (func_02017fa8(data_020b8e44) > 1) {
            do {
                if (func_0201bfa4(data_020b93b8, i)) {
                    cnt++;
                }
                i++;
            } while (i < func_02017fa8(data_020b8e44));
        }
        a = func_0203b688();
        func_020424e0(ctx->f4);
        func_02056bc0(a, (void *)func_ov003_0214d9c0());
        if (ctx->fc != cnt) {
            Handle h2;
            b = func_0205681c(0x88);
            if (b != 0) {
                func_02018644(&h2, data_020b8e44);
                func_02052d90(h2.mar, h2.idx);
                m = func_02052d90(h2.mar, h2.idx);
                k = *(uint16_t *)((uint8_t *)m + *(uint32_t *)((uint8_t *)m + 8) + 0x1c);
                if (h2.mar != 0) {
                    if (h2.flag) {
                        func_02052d3c(h2.mar, h2.idx);
                    }
                    func_02052c04(h2.mar);
                }
                func_02053290(&h2);
                b = func_02047920(b, ctx->f4, (uint16_t)k, 0);
            }
            func_02056bc0(a, b);
        }
        *out = 1;
        return a;
    }
    default:
        break;
    }
    return 0;
}
