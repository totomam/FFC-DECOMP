#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02021028(void *out, void *a, void *b, int n);
extern void *func_0203bd50(Pair v, void *p, int n, int a, int b);
extern void func_02056bc0(void *object, void *node);
extern void func_02009130(void *dst, void *src, void *p);
extern void func_0200b65c(void *a, void *b);
extern void func_020059cc(void *object);
extern void *func_0205681c(uint32_t size);
extern void *func_02031624(void *obj, uint32_t a, Pair v, uint32_t x, uint32_t y, uint32_t z);
extern void func_020095b8(void *dst, void *src);
extern void func_02031754(void *obj, int idx, void *p);
extern void *func_02056aec(void *owner);
extern void *func_02056b10(void *owner);
extern void *func_0203b720(void);
extern uint8_t data_020ae1c8[];

void func_02033454(uint8_t *s) {
    uint32_t o3[3];
    uint32_t o2[3];
    uint32_t o1[3];
    uint32_t d[2];
    uint8_t *r4;
    uint8_t *r6;
    uint8_t *r7;
    uint8_t *t;
    uint8_t *q;

    func_02021028(d, s + 0x80, s + 0xa8, 6);
    *(uint32_t *)(s + 0xa8) -= d[0];
    *(uint32_t *)(s + 0xac) -= d[1];

    r6 = func_0203bd50(*(Pair *)(s + 0xa8), s + 0x80, 6, 0, 0);
    func_02056bc0(s + 0x48, r6);

    if (s[0xb0] != 0) {
        func_02009130(o3, data_020ae1c8, s + 0x8c);
        func_0200b65c(s + 0x8c, o3);
        func_020059cc(o3);
    }

    r4 = func_0205681c(0x118);
    if (r4 != 0) {
        r4 = func_02031624(r4, *(uint32_t *)(s + 0xa4), *(Pair *)(s + 0xa8), 0, 5,
                           *(uint32_t *)(s + 0xb4));
    }

    func_020095b8(o2, s + 0x98);
    func_02031754(r4, 1, o2);
    func_020059cc(o2);

    func_020095b8(o1, s + 0x8c);
    func_02031754(r4, 0, o1);
    func_020059cc(o1);

    r7 = func_02056aec(s);
    r6 = func_02056b10(r6 + 0x14);
    t = func_0203b720();
    q = s + 0x14;
    func_02056bc0(q, t);
    func_02056bc0(q, r6);
    func_02056bc0(q, r4);
    func_02056bc0(q, r7);
}
