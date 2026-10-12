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
    uint8_t fl[2];
    uint32_t c;
    void *obj;
    Big a;
    Big b;
    uint32_t r7;
    int ok;

    r7 = func_ov003_021568fc(p0, p1, &obj, &fl[1], &fl[0]);
    c = *p1;
    ok = 1;
    if (obj != 0) {
        if (((ObjHdr *)obj)->val >= c) {
            ok = 0;
        }
    }
    if (ok != 0) {

    func_02028e70(&a);
    Big *pa = &a;
    Big *pb = &b;
    pb->vt = data_020ad89c;
    func_0205327c(pb->r04, pa->r04);
    COPY_PAIR(pb->p08, pa->p08);
    func_0201a058(pb->r14, pa->r14);
    COPY_PAIR(pb->p3c, pa->p3c);
    COPY_PAIR(pb->p48, pa->p48);
    COPY_PAIR(pb->p54, pa->p54);
    COPY_PAIR(pb->p60, pa->p60);
    pb->w6c = pa->w6c;
    pb->w70 = pa->w70;
    pb->w74 = pa->w74;
    pb->w78 = pa->w78;
    pb->w7c = pa->w7c;
    pb->w80 = pa->w80;
    pb->w84 = pa->w84;
    pb->w88 = pa->w88;
    pb->w8c = pa->w8c;
    pb->w90 = pa->w90;
    pb->w94 = pa->w94;
    func_020095b8(pb->r98, pa->r98);
    pb->ba4 = pa->ba4;

    uint8_t *res = (uint8_t *)func_ov003_0215baf0(p0, r7, fl[1], fl[0], &c) + 0xc;

    func_0202984c(&b);
    func_0202984c(&a);
    return res;
    }
    return (uint8_t *)obj + 0xc;
}
