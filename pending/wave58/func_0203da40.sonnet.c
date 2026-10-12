#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t rest : 31;
    uint32_t len;
    uint8_t *ptr;
} Str;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02005988(void *obj, const void *src);
extern uint32_t func_02092864(const uint8_t *text);
extern void *func_02056830(uint32_t size);
extern int32_t func_02030f04(void *a, void *b, uint32_t c);
extern void func_02009698(void *s, int32_t pos, uint32_t len, void *s2);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02032d24(void *obj, Pair v, void *s, uint32_t c, uint32_t d);
extern void *func_020059cc(void *object);
extern void func_02056858(void *p);
extern uint8_t data_020aeecc[];
extern uint8_t data_020aeed0[];
extern uint8_t data_020aeed4[];

void *func_0203da40(uint8_t *p, uint32_t idx, Str *s5, Str *s4)
{
    Str L44;
    Str L38;
    Str L2c;
    Str L20;
    Str L14;
    Pair pr;
    void *sp8;
    uint8_t *m;
    uint8_t *q;
    uint32_t n4, n5, l;
    uint8_t *d;
    uint32_t r7, r6;
    int used;
    void *r5v;
    uint32_t z;

    m = func_02052d90(*(void **)(p + 0xc4), *(uint32_t *)(p + 0xc8));
    q = m + *(uint32_t *)(m + *(uint32_t *)(m + 8) + (idx << 2));
    func_02005988(&L44, q + *(uint32_t *)(q + 4));

    if (s4->flag == 0) {
        n4 = (((uint32_t)((uint8_t *)s4)[0]) << 24) >> 25;
    } else {
        n4 = s4->len;
    }
    if (s5->flag == 0) {
        n5 = (((uint32_t)((uint8_t *)s5)[0]) << 24) >> 25;
    } else {
        n5 = s5->len;
    }
    if (L44.flag == 0) {
        d = (uint8_t *)&L44 + 1;
    } else {
        d = L44.ptr;
    }
    sp8 = func_02056830(n4 + (n5 + func_02092864(d) + 2));

    func_02005988(&L38, data_020aeecc);
    func_02005988(&L2c, data_020aeed0);
    func_02005988(&L20, data_020aeed4);

    r6 = 0;
    r7 = func_02030f04(&L44, &L38, 0);
    if (r7 != r6 - 1) {
        if (L38.flag == 0) {
            l = (((uint32_t)((uint8_t *)&L38)[0]) << 24) >> 25;
        } else {
            l = L38.len;
        }
        func_02009698(&L44, r7, l, &L20);
    }

    r6 = func_02030f04(&L44, &L2c, 0);
    if (r6 != -1) {
        if (L2c.flag == 0) {
            l = (((uint32_t)((uint8_t *)&L2c)[0]) << 24) >> 25;
        } else {
            l = L2c.len;
        }
        func_02009698(&L44, r6, l, &L20);
    }

    if (r7 == -1 || r6 == -1) {
        uint8_t *a1, *a2, *a3;
        if (s4->flag == 0) { a3 = (uint8_t *)s4 + 1; } else { a3 = s4->ptr; }
        if (s5->flag == 0) { a2 = (uint8_t *)s5 + 1; } else { a2 = s5->ptr; }
        if (L44.flag == 0) { a1 = (uint8_t *)&L44 + 1; } else { a1 = L44.ptr; }
        func_02086ad4(sp8, a1, a2, a3);
    } else if (r7 < r6) {
        uint8_t *a1, *a2, *a3;
        if (s4->flag == 0) { a3 = (uint8_t *)s4 + 1; } else { a3 = s4->ptr; }
        if (s5->flag == 0) { a2 = (uint8_t *)s5 + 1; } else { a2 = s5->ptr; }
        if (L44.flag == 0) { a1 = (uint8_t *)&L44 + 1; } else { a1 = L44.ptr; }
        func_02086ad4(sp8, a1, a2, a3);
    } else if (r7 > r6) {
        uint8_t *a1, *a2, *a3;
        if (s5->flag == 0) { a3 = (uint8_t *)s5 + 1; } else { a3 = s5->ptr; }
        if (s4->flag == 0) { a2 = (uint8_t *)s4 + 1; } else { a2 = s4->ptr; }
        if (L44.flag == 0) { a1 = (uint8_t *)&L44 + 1; } else { a1 = L44.ptr; }
        func_02086ad4(sp8, a1, a2, a3);
    }

    z = 0;
    used = 0;
    r5v = func_0205681c(0xb0);
    if (r5v != 0) {
        func_02005988(&L14, sp8);
        pr.a = 0x80;
        pr.b = 0x60;
        used = 1;
        r5v = func_02032d24(r5v, pr, &L14, 4, z);
    }
    if (used) {
        func_020059cc(&L14);
    }
    func_02056858(sp8);
    func_020059cc(&L20);
    func_020059cc(&L2c);
    func_020059cc(&L38);
    func_020059cc(&L44);
    return r5v;
}
