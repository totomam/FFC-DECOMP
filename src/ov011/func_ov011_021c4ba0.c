#include "ffc/types.h"

extern void *func_02056b10(void *owner);
extern void *func_0203b708(void *x);
extern void func_02056bc0(void *object, void *node);
extern int func_0201bd84(void *x, int y);
extern void *func_0203c318(void);
extern void func_020591f4(void *x, int y);
extern void func_02005988(void *dst, const void *src);
extern void func_02018c48(void *dst, const void *src);
extern void *func_020059cc(void *object);
extern void *func_02052d90(const void *mar, uint32_t index);
extern void *func_0203be48(void *a, void *b, void *c, int d);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);
extern int func_0201e9f8(void *x);
extern void *func_020159c8(void *x, int y);
extern void func_02053370(void *dst, void *src, void *x);
typedef struct { int a, b; } P2;
extern void func_0200ac24(void *a, void *b, P2 c, int e, void *f, void *g);
extern void func_ov011_021c408c(void *self);

extern void *data_0209de94;
extern void *data_020b93b8;
extern uint8_t data_ov011_021cb40c[];
extern uint8_t data_ov011_021cb424[];
extern void *data_0213df20;
extern void *data_020b8e44;
extern uint8_t data_ov011_021cb438[];

typedef struct {
    uint32_t f0;
    void *f4;
    void *f8;
    uint8_t fc;
} Tmp;

void func_ov011_021c4ba0(uint8_t *self, int p)
{
    void *n, *m, *q, *res, *obj, *ctx;
    void **vt;
    const void *name;
    int st;
    Tmp t7c, t6c;
    uint8_t s60[12], s54[12], s48[12], s3c[12], s30[12], s24[12], s18[12];

    n = func_02056b10(*(void **)(self + 0x104));
    m = func_0203b708(data_0209de94);
    ctx = self + 0x14;
    func_02056bc0(ctx, m);
    func_02056bc0(ctx, n);

    if (p == 0) {
        if (func_0201bd84(data_020b93b8, 0x17) != 0) {
            func_020591f4(func_0203c318(), 0);
            *(uint32_t *)((uint8_t *)*(void **)(self + 0xb8) + 0xc) = 3;
            name = data_ov011_021cb40c;
            if (self[0x1cd] == 0) {
                name = data_ov011_021cb424;
            }
            func_02005988(s48, name);
            func_02018c48(&t7c, s48);
            func_020059cc(s48);
            q = func_02052d90(t7c.f4, t7c.f8);
            {
                uint8_t *b = (uint8_t *)q;
                uint8_t *r2 = b + *(uint32_t *)(b + *(uint32_t *)(b + 8) + 0x7c);
                func_02005988(s3c, r2 + *(uint32_t *)(r2 + 4));
            }
            res = func_0203be48(data_0213df20, s3c, *(void **)(self + 0xbc), 0);
            func_020059cc(s3c);
            func_02056bc0(self + 0x14, res);
            obj = *(void **)(self + 0xdc);
            vt = *(void ***)obj;
            ((void (*)(void *, int))vt[8])(obj, 2);
            Tmp *ptt7c = &t7c;
            if (t7c.f4 != 0) {
                Tmp *pt = ptt7c;
                if (pt->fc != 0) {
                    func_02052d3c(pt->f4, pt->f8);
                }
                func_02052c04(pt->f4);
            }
            func_02053290(ptt7c);
            goto end;
        }
        if (self[0x1cc] != 0 && func_0201e9f8(data_020b93b8)) {
            func_020591f4(func_0203c318(), 0);
            *(uint32_t *)((uint8_t *)*(void **)(self + 0xb8) + 0xc) = 0;
            name = data_ov011_021cb40c;
            if (self[0x1cd] == 0) {
                name = data_ov011_021cb424;
            }
            func_02005988(s30, name);
            func_02018c48(&t6c, s30);
            func_020059cc(s30);
            q = func_02052d90(t6c.f4, t6c.f8);
            {
                uint8_t *b = (uint8_t *)q;
                uint8_t *r2 = b + *(uint32_t *)(b + *(uint32_t *)(b + 8) + 0x44);
                func_02005988(s24, r2 + *(uint32_t *)(r2 + 4));
            }
            res = func_0203be48(data_0213df20, s24, *(void **)(self + 0xbc), 0);
            func_020059cc(s24);
            func_02005988(s60, func_020159c8(data_020b8e44, 0x105));
            func_02005988(s18, data_ov011_021cb438);
            func_02053370(s54, s18, func_020159c8(data_020b8e44, 0x106));
            func_020059cc(s18);
            P2 pp; pp.a = 0xfe; pp.b = 0x8e;
            func_0200ac24(res, *(uint8_t **)(self + 0xb8) + 0xc, pp, 3, s60, s54);
            func_02056bc0(self + 0x14, res);
            obj = *(void **)(self + 0xdc);
            vt = *(void ***)obj;
            ((void (*)(void *, int))vt[8])(obj, 2);
            func_020059cc(s54);
            func_020059cc(s60);
            Tmp *ptt6c = &t6c;
            if (t6c.f4 != 0) {
                Tmp *pt = ptt6c;
                if (pt->fc != 0) {
                    func_02052d3c(pt->f4, pt->f8);
                }
                func_02052c04(pt->f4);
            }
            func_02053290(ptt6c);
            goto end;
        }
        st = 1;
    } else {
        st = 2;
    }
    *(uint32_t *)((uint8_t *)*(void **)(self + 0xb8) + 0xc) = st;

end:
    func_ov011_021c408c(self);
}
