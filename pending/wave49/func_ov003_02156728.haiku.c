#include "ffc/types.h"

typedef struct Pair {
    void *a;
    void *b;
    uint8_t f;
} Pair;

typedef struct Big {
    void *vt;
    uint8_t r04[4];
    Pair p08;
    uint8_t r14[0x28];
    Pair p3c;
    Pair p48;
    Pair p54;
    Pair p60;
    uint32_t w6c;
    uint32_t w70;
    uint32_t w74;
    uint32_t w78;
    uint32_t w7c;
    uint32_t w80;
    uint32_t w84;
    uint32_t w88;
    uint32_t w8c;
    uint32_t w90;
    uint32_t w94;
    uint8_t r98[0xc];
    uint8_t ba4;
} Big;

typedef struct ObjHdr {
    uint32_t pad[3];
    uint32_t val;
} ObjHdr;

extern uint8_t data_020ad89c[];

extern uint32_t func_ov003_021568fc(void *a, uint32_t *b, void **out, uint8_t *f1, uint8_t *f2);
extern void func_02028e70(void *p);
extern void *func_0205327c(void *destination, const void *source);
extern void func_02052be0(void *p);
extern void func_02052d10(void *a, void *b);
extern void func_0201a058(void *dst, const void *src);
extern void func_020095b8(void *dst, const void *src);
extern void *func_ov003_0215baf0(void *a, uint32_t b, uint8_t c, uint8_t d, uint32_t *e);
extern void func_0202984c(void *p);

#define COPY_PAIR(D, S) { \
    void *ta = (S).a; \
    void *tb = (S).b; \
    uint8_t tf = (S).f; \
    (D).b = tb; \
    (D).f = tf; \
    (D).a = ta; \
    if (ta) { \
        func_02052be0(ta); \
        if ((D).f) { \
            func_02052d10((D).a, (D).b); \
        } \
    } \
}

uint8_t *func_ov003_02156728(void *p0, uint32_t *p1)
{
    uint8_t b1;
    uint8_t b2;
    uint32_t c;
    void *obj;
    Big a;
    Big b;
    uint32_t r7;
    int ok;

    r7 = func_ov003_021568fc(p0, p1, &obj, &b1, &b2);
    ok = 1;
    if (obj != 0) {
        if (((ObjHdr *)obj)->val >= *p1) {
            ok = 0;
        }
    }
    if (ok == 0) {
        return (uint8_t *)obj + 0xc;
    }

    func_02028e70(&a);
    c = *p1;
    b.vt = data_020ad89c;
    func_0205327c(b.r04, a.r04);
    COPY_PAIR(b.p08, a.p08);
    func_0201a058(b.r14, a.r14);
    COPY_PAIR(b.p3c, a.p3c);
    COPY_PAIR(b.p48, a.p48);
    COPY_PAIR(b.p54, a.p54);
    COPY_PAIR(b.p60, a.p60);
    b.w6c = a.w6c;
    b.w70 = a.w70;
    b.w74 = a.w74;
    b.w78 = a.w78;
    b.w7c = a.w7c;
    b.w80 = a.w80;
    b.w84 = a.w84;
    b.w88 = a.w88;
    b.w8c = a.w8c;
    b.w90 = a.w90;
    b.w94 = a.w94;
    func_020095b8(b.r98, a.r98);
    b.ba4 = a.ba4;

    r7 = (uint32_t)func_ov003_0215baf0(p0, r7, b1, b2, &c) + 0xc;

    func_0202984c(&b);
    func_0202984c(&a);
    return (uint8_t *)r7;
}
