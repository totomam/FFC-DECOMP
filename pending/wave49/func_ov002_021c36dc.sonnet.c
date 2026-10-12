#include "ffc/types.h"

typedef struct { int32_t x, y; } P;
extern void func_0208763c(void *p);
extern void func_02087678(void *p);
extern void *func_0203b6fc(void);
extern void *func_02062a78(void *obj, P a, P b, int32_t c, int32_t d);
extern void func_02056bc0(void *object, void *node);
extern P data_ov002_021d71a8[];
extern P data_ov002_021d71b8[];

typedef struct VT {
    int32_t pad[3];
    void (*f3)(void *, P);
    P (*f4)(void *);
    int32_t pad2[9];
    void (*f14)(void *, int32_t, int32_t);
} VT;

void func_ov002_021c36dc(uint8_t *self, int32_t p1, int32_t p2)
{
    uint8_t *obj = *(uint8_t **)(self + 0xd4);
    uint8_t *sub;
    volatile int32_t flag;
    int32_t skip;
    void *ctx;
    P a, b, r0_, t0, t1, t2, t3, t4, t5;

    flag = obj[0x12];
    sub = obj + 0x1c;
    if (flag) func_0208763c(sub);
    skip = *(int32_t *)(obj + 0x14) == 0;
    if (flag) func_02087678(sub);
    if (skip == 0) {
        ctx = func_0203b6fc();
        (*(VT **)*(void **)(self + 0xdc))->f14(*(void **)(self + 0xdc), p1, 0);
        if (*(int32_t *)(self + 0x84) == p2) {
            r0_ = (*(VT **)*(void **)(self + 0xdc))->f4(*(void **)(self + 0xdc)); a = r0_;
            if (p2 == 0) { t0.x = 0x20; t0.y = 0xa0; b = t0; }
            else { t1.x = 0xe0; t1.y = 0xa0; b = t1; }
        } else {
            if (p2 == 0) { t2.x = -0x20; t2.y = 0xa0; a = t2; }
            else { t3.x = 0x120; t3.y = 0xa0; a = t3; }
            if (p2 == 0) { t4.x = 0x20; t4.y = 0xa0; b = t4; }
            else { t5.x = 0xe0; t5.y = 0xa0; b = t5; }
            func_02056bc0(ctx, func_02062a78(*(void **)(self + 0xd8), data_ov002_021d71a8[*(int32_t *)(self + 0x84)], data_ov002_021d71a8[p2], 10, 12));
            func_02056bc0(ctx, func_02062a78(*(void **)(self + 0xe0), data_ov002_021d71b8[*(int32_t *)(self + 0x84)], data_ov002_021d71b8[p2], 10, 12));
        }
        (*(VT **)*(void **)(self + 0xdc))->f3(*(void **)(self + 0xdc), a);
        func_02056bc0(ctx, func_02062a78(*(void **)(self + 0xdc), a, b, 10, 12));
        func_02056bc0(*(void **)(self + 0xd0), ctx);
    }
    if (p1 != -1) *(int32_t *)(self + 0x80) = p1;
    *(int32_t *)(self + 0x84) = p2;
}
