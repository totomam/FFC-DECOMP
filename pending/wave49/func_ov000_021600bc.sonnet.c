#include "ffc/types.h"

typedef uint64_t Pair;

extern uint8_t *func_ov000_02163350(void);
extern uint64_t func_0209a76c(uint32_t a, uint32_t b);
extern void *func_ov000_0215a638(void);
extern void *func_ov000_021553c4(void *a, void *b);
extern int func_ov000_02155254(void *a);
extern int func_ov000_02163654(void *a);
extern int func_ov001_02175e40(uint32_t a, void *b, void *c);
extern int func_ov001_02175d6c(uint32_t a, uint32_t b, void *c);
extern int func_ov000_02163aa4(void *a);
extern void func_ov000_02163758(void);
extern int func_ov000_0215fef0(void *a, uint32_t b);
extern uint64_t func_020882cc(void);

int func_ov000_021600bc(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t *p;
    uint8_t *q;
    uint8_t *s;
    uint8_t *t;
    uint8_t *u;
    uint8_t *v;
    uint8_t *w;
    void *sv;
    void *e;
    uint32_t found = 0;
    int32_t i;
    uint32_t l1;
    struct { uint32_t x; uint32_t y; uint32_t z[0x83]; } l2;
    int r6;
    Pair pr;

    if (b == 0) {
        p = func_ov000_02163350();
        p[0x621]++;
        q = func_ov000_02163350();
        s = func_ov000_02163350();
        t = func_ov000_02163350();
        pr = func_0209a76c(s[0x621], *(uint32_t *)(t + 0x6d4));
        q[0x621] = (uint8_t)((uint32_t)(pr >> 32));
    }
    func_ov000_02163350()[0x14] = 3;
    i = 0;
    if (*(int32_t *)(func_ov000_02163350() + 0x6d4) > 0) {
        do {
            sv = func_ov000_0215a638();
            p = func_ov000_02163350();
            s = func_ov000_02163350();
            t = func_ov000_02163350();
            e = func_ov000_021553c4(sv, (uint8_t *)*(uint32_t *)(p + 0x68c) + 12 * s[t[0x621] + 0x694]);
            if (e == 0 || e == (void *)-1) goto L0144;
            u = func_ov000_02163350();
            v = func_ov000_02163350();
            w = func_ov000_02163350();
            if (func_ov000_02155254((uint8_t *)*(uint32_t *)(u + 0x68c) + 12 * v[w[0x621] + 0x694]) == 0) goto L0144;
            if (func_ov000_02163654(e) != 0) goto L0144;
            r6 = func_ov001_02175e40(*(uint32_t *)func_ov000_02163350(), e, &l1);
            r6 |= func_ov001_02175d6c(*(uint32_t *)func_ov000_02163350(), l1, &l2);
            if (func_ov000_02163aa4(&l2) != 0) goto L0144;
            if (r6 != 0) goto L0144;
            if (l2.y != 4) goto L0144;
            found = 1;
            goto L0176;
        L0144:
            i++;
            p = func_ov000_02163350();
            s = func_ov000_02163350();
            t = func_ov000_02163350();
            pr = func_0209a76c(i + s[0x621], *(uint32_t *)(t + 0x6d4));
            p[0x621] = (uint8_t)((uint32_t)(pr >> 32));
        } while (i < *(int32_t *)(func_ov000_02163350() + 0x6d4));
    }
L0176:
    if (found != 0) {
        if (e == (void *)c) a = 1;
        func_ov000_02163758();
        func_ov000_02163350()[0x56a] = 0xff;
        *(void **)(func_ov000_02163350() + 0x554) = e;
        return func_ov000_0215fef0(e, a);
    }
    p = func_ov000_02163350();
    *(uint32_t *)(p + 0x644) = 0xbb8;
    pr = func_020882cc();
    q = func_ov000_02163350();
    *(uint32_t *)(q + 0x648) = ((uint32_t)pr);
    *(uint32_t *)(q + 0x64c) = ((uint32_t)(pr >> 32));
    *(uint32_t *)(func_ov000_02163350() + 0x638) = 0;
    return 0;
}
