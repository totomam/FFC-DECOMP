#include "ffc/types.h"

typedef struct {
    uint32_t inl : 1;
    uint32_t rest : 31;
    uint32_t w4;
    uint8_t *p8;
} Str;

extern void func_02056c4c(void *a);
extern void func_0200b65c(void *a, void *b);
typedef struct { uint8_t v; } Flag1;
extern void func_ov013_021c1e3c(void *a, void *b, Flag1 c);
extern void func_020095b8(void *a, void *b);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
extern uint32_t func_02030f9c(void *a, void *b, uint32_t c);
extern void func_02005f3c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_020394a4(void *a, void *b);
extern void *func_020059cc(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02033338(void *a, void *b, void *c, uint32_t d);
extern void func_02033438(void *a, uint32_t b);
extern void func_02056bc0(void *object, void *node);

extern void *data_020b8e44;
extern uint8_t data_ov013_021c4b7c[];
extern uint8_t data_ov013_021c4b80[];
extern uint8_t data_ov013_021c4b84[];
extern uint32_t data_ov013_021c4b74[2];

void func_ov013_021c1738(uint8_t *self)
{
    uint8_t s48[0x100];
    Str s3c, s30, s24, s18, sc;
    Str fl;

    uint32_t n, off, off2;
    uint32_t r4, m;
    uint32_t *src;
    uint8_t *p1, *p2;
    void *r6;
    uint32_t cleanup;

    func_02056c4c(*(void **)(self + 0xe4));
    n = 1;
    *(uint32_t *)(self + 0xcc) = n;
    src = *(uint32_t **)(self + 0xf4);
    off = n + 0xff;
    *(uint32_t *)(self + off) = src[0];
    func_0200b65c(self + off + 4, src + 1);

    ((Flag1 *)&fl)->v = 0;
    func_ov013_021c1e3c(self + 0xf4, *(void **)(self + 0xf4), *(Flag1 *)&fl);

    off2 = 0x41 << 2;
    func_020095b8(&s3c, self + off2);
    {
        void *obj = func_020159c8(data_020b8e44, off2 + 0xb4);
        func_02005988(&s30, obj);
    }
    r4 = func_02030f9c(&s30, data_ov013_021c4b7c, 0);
    m = func_02030f9c(&s30, data_ov013_021c4b80, 0);
    if (r4 != 0xffffffff && m != 0xffffffff && r4 < m) {
        func_02005f3c(&s30, r4, 2, data_ov013_021c4b84);
        func_020095b8(&s24, &s3c);
        func_020394a4(&s18, &s24);
        func_0200b65c(&s3c, &s18);
        func_020059cc(&s18);
        func_020059cc(&s24);
    }

    if (s3c.inl == 0) {
        p2 = (uint8_t *)&s3c + 1;
    } else {
        p2 = s3c.p8;
    }
    if (s30.inl == 0) {
        p1 = (uint8_t *)&s30 + 1;
    } else {
        p1 = s30.p8;
    }
    func_02091b10(s48, p1, p2);
    func_020059cc(&s30);
    func_020059cc(&s3c);

    cleanup = 0;
    r6 = func_0205681c(0xb8);
    if (r6 != 0) {
        func_02005988(&sc, s48);
        r6 = func_02033338(r6, &sc, self + 0xcc, 0);
        cleanup = 1;
    }
    if (cleanup) {
        func_020059cc(&sc);
    }
    func_02033438(r6, 1);
    func_02056bc0(self + 0x14, r6);
    *(uint32_t *)(self + 0xb8) = data_ov013_021c4b74[0];
    *(uint32_t *)(self + 0xbc) = data_ov013_021c4b74[1];
}
