#include "ffc/types.h"

extern uint32_t data_020b8e44;
extern void func_02019070(void *out, uint32_t x);
extern uint32_t func_02017fc0(uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_0201bfcc(uint32_t p, uint32_t i, uint32_t f);
extern void func_02052d3c(void *a, uint32_t b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

typedef struct {
    uint32_t a;
    void *b;
    uint32_t c;
    uint8_t flag;
} Local;

void func_0201b10c(uint32_t p) {
    Local s;
    Local *ps;
    uint32_t i;
    uint32_t n;
    uint8_t *e;
    void *m;

    func_02019070(&s, data_020b8e44);
    i = 1;
    n = func_02017fc0(data_020b8e44);
    if (n > 1) {
        do {
            m = func_02052d90(s.b, s.c);
            e = (uint8_t *)m + *(uint32_t *)((uint8_t *)m + 0xc) + i * 8;
            if (e[2] != 0) {
                func_0201bfcc(p, i, 1);
            }
            i++;
        } while (i < func_02017fc0(data_020b8e44));
    }
    ps = &s;
    if (s.b != 0) {
        if (ps->flag != 0) {
            func_02052d3c(ps->b, ps->c);
        }
        func_02052c04(ps->b);
    }
    func_02053290(ps);
}
