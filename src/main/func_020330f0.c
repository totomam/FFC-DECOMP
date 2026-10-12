#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02005988(void *a, void *b);
extern void func_020095b8(void *a, void *b);
extern void func_02050ea4(void *a, void *b, uint32_t n);
extern void func_02050ffc(void *a, void *b, uint32_t n);
extern void func_02033014(void *a, void *b, void *c);
extern void func_0200b65c(void *a, void *b);
extern void *func_020059cc(void *object);
extern void func_0200958c(void *a);
extern uint8_t *func_0203bd50(Pair v, void *c, uint32_t d, uint32_t e, uint32_t f);
extern void func_02032628(uint8_t *a, uint32_t b);
extern void func_02056bc0(void *a, void *b);
extern void *func_02056b10(void *owner);
extern uint32_t data_020ae18c[];
extern uint32_t data_020ae190[];

void func_020330f0(uint8_t *p) {
    uint32_t l38[3];
    uint32_t l2c[3];
    uint32_t l20[3];
    uint32_t l14[3];
    uint32_t l8[3];
    uint8_t *q;
    uint32_t mode;
    void *d;

    if (*(uint32_t *)(p + 0x8c) != 0) {
        return;
    }
    d = data_020ae18c;
    if (*(uint32_t *)(p + 0x90) != 0) {
        d = data_020ae190;
    }
    func_02005988(l38, d);
    mode = 2;
    if (*(uint32_t *)(p + 0x90) != 0) {
        mode = 3;
    }
    func_020095b8(l2c, p + 0x80);
    func_02050ea4(l20, l2c, 10);
    func_02050ffc(l14, l20, 10);
    func_02033014(l8, l14, l38);
    func_0200b65c(p + 0x80, l8);
    func_020059cc(l8);
    func_020059cc(l14);
    func_0200958c(l20);
    func_020059cc(l2c);
    q = func_0203bd50(*(Pair *)(p + 0x94), p + 0x80, *(uint32_t *)(p + 0x9c), mode, 0);
    func_02032628(q, *(p + 0xa0));
    func_02056bc0(p + 0x48, q);
    q += 0x14;
    func_02056bc0(p + 0x14, func_02056b10(q));
    *(uint32_t *)(p + 0x8c) = *(uint32_t *)(p + 0x8c) + 1;
    func_020059cc(l38);
}
