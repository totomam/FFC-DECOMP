#include "ffc/types.h"

typedef struct { uint32_t f:1; uint32_t g:31; uint32_t w1; uint32_t w2; } Str;
typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_020559d4(void *object);
extern uint32_t func_ov013_021c10cc(void *a, uint32_t b);
extern void func_020095b8(void *dst, void *src);
extern uint32_t func_020159c8(void *obj, uint32_t idx);
extern void func_02005988(void *dst, uint32_t v);
extern uint32_t func_02030f9c(void *first, void *second, uint32_t third);
extern void func_02005f3c(void *s, uint32_t a, uint32_t b, void *c);
extern void func_020394a4(void *dst, void *src);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0205681c(uint32_t size);
extern void *func_02032d24(void *a, uint32_t b, uint32_t c, void *d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void *func_0206cdf0(void *a, uint16_t b);

extern void *data_020b8e44;
extern uint32_t data_ov013_021c4b7c;
extern uint32_t data_ov013_021c4b80;
extern uint32_t data_ov013_021c4b84;
extern Pair data_ov013_021c4bb8;
extern Pair data_ov013_021c4bc0;
extern Pair data_ov013_021c4bc8;
extern Pair data_ov013_021c4bd0;

void func_ov013_021c1b34(void *param)
{
    uint8_t *self = (uint8_t *)param;
    struct { Pair tmp; Str s10, s1c, s28, s34, s40; char s4c[0x100]; } L;

    uint32_t i;
    uint32_t n4, n0, t, a1, a2;
    void *r6;
    int r4;

    func_020559d4(self + 0x80);
    if (func_ov013_021c10cc(*(void **)(self + 0xec), *(uint32_t *)(self + 0x100) - 1) == 0) {
        func_020095b8(&L.s40, self + 0x104);
        t = func_020159c8(data_020b8e44, 0x1ba);
        func_02005988(&L.s34, t);
        n4 = func_02030f9c(&L.s34, &data_ov013_021c4b7c, 0);
        n0 = func_02030f9c(&L.s34, &data_ov013_021c4b80, 0);
        if (n4 != 0xffffffffu && n0 != 0xffffffffu && n4 < n0) {
            func_02005f3c(&L.s34, n4, 2, &data_ov013_021c4b84);
            func_020095b8(&L.s28, &L.s40);
            func_020394a4(&L.s1c, &L.s28);
            func_0200b65c(&L.s40, &L.s1c);
            func_020059cc(&L.s1c);
            func_020059cc(&L.s28);
        }

        a2 = (L.s40.f == 0) ? (uint32_t)((uint8_t *)&L.s40 + 1) : L.s40.w2;
        a1 = (L.s34.f == 0) ? (uint32_t)((uint8_t *)&L.s34 + 1) : L.s34.w2;
        func_02091b10(L.s4c, a1, a2);
        func_020059cc(&L.s34);
        func_020059cc(&L.s40);

        r4 = 0;
        r6 = func_0205681c(0xb0);
        if (r6 != 0) {
            func_02005988(&L.s10, (uint32_t)L.s4c);
            L.tmp.a = 0x80;
            L.tmp.b = 0x60;
            r6 = func_02032d24(r6, L.tmp.a, L.tmp.b, &L.s10, 4, 0);
            r4 = 1;
        }
        func_02056bc0(self + 0x14, r6);
        if (r4 != 0) {
            func_020059cc(&L.s10);
        }
        *(Pair *)(self + 0xb8) = data_ov013_021c4bb8;
        return;
    }

    if (*(uint32_t *)(self + 0xcc) == 1) {
        if (*(uint32_t *)(self + 0xf8) == 0) {
            *(Pair *)(self + 0xb8) = data_ov013_021c4bc0;
        } else {
            *(Pair *)(self + 0xb8) = data_ov013_021c4bc8;
        }
        return;
    }
    for (i = 0; i < *(uint32_t *)(self + 0xf8); i++) {
        uint8_t *base = *(uint8_t **)(self + 0xf4);
        uint16_t v = (uint16_t)*(uint32_t *)(base + i * 16);
        func_02056bc0(self + 0x14, func_0206cdf0(*(void **)(self + 0xc8), v));
    }
    *(Pair *)(self + 0xb8) = data_ov013_021c4bd0;
}
