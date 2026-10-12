#include "ffc/types.h"

extern void func_0205730c(void *p, int32_t v);
extern float func_0209a484(int32_t v);
extern float func_0209b5bc(float a, float b);
extern int32_t *func_ov003_02155b40(void *p);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern float func_0209af28(float a, float b);
extern int32_t func_0209a2e0(float a, float b);
extern int32_t func_0209a33c(float a, float b);
extern float func_0209b108(float a, float b);
extern float func_0209b338(float a, float b);
extern int32_t func_0209ab5c(float v);
extern void func_ov003_02157b6c(void *obj, uint16_t a, int32_t b, int32_t c, int32_t d, int32_t e, int32_t f);
extern int32_t func_020816d4(int32_t a, int32_t b);
extern void func_ov003_02158264(void *obj, int32_t a, int32_t b, int32_t c);
extern void func_ov003_0215b1b0(void *obj, uint16_t a, uint8_t b);

typedef struct {
    uint8_t pad0[0x34];
    int32_t a;
    int32_t b;
    uint8_t pad1[0x10];
    void *obj;
    uint8_t pad2;
    uint8_t flag;
    uint16_t state;
    uint16_t f54;
    uint16_t f56;
    int32_t pad3;
    int32_t f5c;
    int32_t f60;
    int32_t f64;
    int32_t f68;
    int32_t f6c;
} FfcObj;

void func_ov003_0215b74c(FfcObj *p, int32_t r7) {
    int64_t dx64, dy64;
    int32_t sa, sb, dx, dy, r3, r4v, r0v, r1s, r2s, diff;
    int32_t *q;
    float fa, fb, sp10, f1, f2, ratio, fn2, fn3, v;
    uint64_t sq1, sq2, p1, p2, p3, p4;
    uint8_t flag;

    func_0205730c(p, r7);
    sa = p->a;
    sb = p->b;
    if (p->state == 0 || p->state == 3) {
    diff = (r7 - p->f60) - p->f64;
    if (diff < 0) {
        fa = 0.3f;
        fb = 3.5f;
    } else {
        fa = 0.3f;
        fb = 2.5f;
    }
    sp10 = func_0209b5bc(func_0209a484(p->f5c), 4096.0f);
    q = func_ov003_02155b40(p->obj);
    dx = sa - q[2];
    dy = sb - q[3];

    *(volatile uint16_t *)0x040002b0 = 1;
    dx64 = dx;
    dy64 = dy;
    p1 = func_0209a71c((uint64_t)dy64, (uint64_t)dy64);
    p2 = func_0209a71c((uint64_t)dx64, (uint64_t)dx64);
    sq1 = p1 + 0x1000 + p2;
    *(volatile uint64_t *)0x040002b8 = sq1;
    while (*(volatile uint16_t *)0x040002b0 & 0x8000) {
    }
    r1s = *(volatile uint32_t *)0x040002b4;

    *(volatile uint16_t *)0x040002b0 = 1;
    p3 = func_0209a71c((uint64_t)p->f6c, (uint64_t)p->f6c);
    p4 = func_0209a71c((uint64_t)p->f68, (uint64_t)p->f68);
    sq2 = p3 + 0x1000 + p4;
    *(volatile uint64_t *)0x040002b8 = sq2;
    while (*(volatile uint16_t *)0x040002b0 & 0x8000) {
    }
    r2s = *(volatile uint32_t *)0x040002b4;

    f1 = func_0209b5bc(func_0209a484(r1s), 4096.0f);
    f2 = func_0209b5bc(func_0209a484(r2s), 4096.0f);
    ratio = func_0209b5bc(f1, f2);
    fn2 = func_0209af28(sp10, ratio);
    fn3 = func_0209af28(fn2, fb);
    if (!(fn3 > sp10)) {
        if (!(fn3 < fa)) {
            fa = fn3;
        }
        sp10 = fa;
    }
    if (sp10 > 0.0f) {
        v = func_0209b108(0.5f, func_0209af28(4096.0f, sp10));
    } else {
        v = func_0209b338(func_0209af28(4096.0f, sp10), 0.5f);
    }
    r3 = func_0209ab5c(v);
    func_ov003_02157b6c(p->obj, p->f56, 1, r3, 0, 0, 0);
    }

    q = func_ov003_02155b40(p->obj);
    q[2] = sa;
    q[3] = sb;
    r4v = func_020816d4(4096, (int32_t)0xfff9c000);
    r0v = func_020816d4((int32_t)0xfffff000, 0);
    func_ov003_02158264(p->obj, ((0x4000 - r4v) * 360) >> 4, r0v, 1);
    p->f64 = r7 - p->f60;
    flag = p->flag;
    p->f60 = r7;
    if (flag == 0) {
        func_ov003_0215b1b0(p->obj, p->f54, 1);
        p->flag = 1;
    }
}
