#include "ffc/types.h"

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint32_t v[3]; } Vec3;

extern void func_02021028(void *a, void *b, void *c, uint32_t d);
extern void *func_0203bd50(Pair p, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern void func_02009130(void *a, void *b, void *c);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *a, uint32_t b, Pair c, uint32_t d, uint32_t e, uint32_t f);
extern void func_020095b8(void *a, void *b);
extern void func_02031754(void *a, uint32_t b, void *c);
extern void *func_02056aec(void *a);
extern void *func_02056b10(void *owner);
extern void *func_0203b720(void);
extern uint8_t data_020ae1c8[];

#define U32AT(p, o) (*(uint32_t *)((uint8_t *)(p) + (o)))

void func_02033630(uint8_t *p)
{
    uint32_t out[2];
    Vec3 v38, v2c, v20, v14;
    void *r4;
    void *r6;
    void *r7;

    func_02021028(out, p + 0x80, p + 0xb4, 6);
    U32AT(p, 0xb4) = U32AT(p, 0xb4) - out[0];
    U32AT(p, 0xb8) = U32AT(p, 0xb8) - out[1];

    r6 = func_0203bd50(*(Pair *)(p + 0xb4), p + 0x80, 6, 0, 0);
    func_02056bc0(p + 0x48, r6);

    if (p[0xbc] != 0) {
        func_02009130(&v38, data_020ae1c8, p + 0xa4);
        func_0200b65c(p + 0xa4, &v38);
        func_020059cc(&v38);
    }

    r4 = func_0205681c(0x118);
    if (r4 != 0) {
        r4 = func_02031624(r4, U32AT(p, 0xb0), *(Pair *)(p + 0xb4), 0, 5, U32AT(p, 0xc0));
    }

    r7 = &v2c;
    func_020095b8(r7, p + 0x98);
    func_02031754(r4, 1, r7);
    func_020059cc(r7);

    r7 = &v20;
    func_020095b8(r7, p + 0x8c);
    func_02031754(r4, 0, r7);
    func_020059cc(r7);

    r7 = &v14;
    func_020095b8(r7, p + 0xa4);
    func_02031754(r4, 2, r7);
    func_020059cc(r7);

    r7 = func_02056aec(p);
    r6 = func_02056b10((uint8_t *)r6 + 0x14);
    func_02056bc0(p + 0x14, func_0203b720());
    func_02056bc0(p + 0x14, r6);
    func_02056bc0(p + 0x14, r4);
    func_02056bc0(p + 0x14, r7);
}
