#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *b;
    void *c;
    uint8_t d;
} FuncS;

extern void *data_020b8e44;
extern void func_02017060(FuncS *out, void *v);
extern void *func_02052d90(void *x, void *y);
extern void func_02052d3c(void *x, void *y);
extern void func_02052c04(void *x);
extern void func_02053290(FuncS *obj);
extern void func_ov003_02174f44(uint8_t *self, uint32_t a, uint32_t b);
extern void func_ov003_02174e74(uint8_t *self, uint32_t b);

void func_ov003_021742a4(uint8_t *p)
{
    FuncS s1;
    FuncS s2;
    FuncS *q;
    int v;
    uint32_t r4;
    uint32_t r7;
    uint32_t r6;
    uint32_t r2;

    r4 = (*(int32_t *)(p + 0x84) == -1);
    r7 = 0;
    if (p[0x98]) {
        r7 = 2;
    }
    *(int32_t *)(p + 0x8c) = 2;
    *(int32_t *)(p + 0x90) = 3;
    if (r4) {
        *(int32_t *)(p + 0x8c) = *(int32_t *)(p + 0x90) - 6;
        *(int32_t *)(p + 0x90) = 2;
    }

    func_02017060(&s1, data_020b8e44);
    r6 = ((uint16_t *)func_02052d90(s1.b, s1.c))[4];
    q = &s1;
    if (q->b != 0) {
        if (q->d != 0) {
            func_02052d3c(q->b, q->c);
        }
        func_02052c04(q->b);
    }
    func_02053290(&s1);

    func_02017060(&s2, data_020b8e44);
    v = ((uint16_t *)func_02052d90(s2.b, s2.c))[5];
    q = &s2;
    if (q->b != 0) {
        if (q->d != 0) {
            func_02052d3c(q->b, q->c);
        }
        func_02052c04(q->b);
    }
    func_02053290(&s2);

    r2 = v + r7;
    if (r4) {
        r2 = r6 + 5;
    }
    func_ov003_02174f44(p, r6, r2);
    func_ov003_02174e74(p, 2);
}
