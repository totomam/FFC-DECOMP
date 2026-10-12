#include "ffc/types.h"

typedef struct {
    uint32_t a;
    void *b;
    void *c;
    uint8_t d;
} Local;

typedef struct {
    uint32_t pad[8];
    Local s;
} Frame;

extern uint32_t data_020b8e44;
extern void func_02015e8c(Local *out, uint32_t x);
extern void *func_02052d90(void *mar, uint32_t index);
extern uint32_t func_ov002_021d3314(const void *object);
extern uint32_t func_ov002_021d3310(const void *object);
extern uint32_t func_02081210(uint32_t a, uint32_t b);
extern void func_02052d3c(void *a, void *b);
extern void func_02052c04(void *a);
extern void *func_02053290(void *object);

uint32_t func_ov002_021aaab0(uint8_t *p)
{
    Frame f;
    uint32_t k;
    uint32_t r4;
    uint32_t r6;
    uint32_t r5;
    Local *s;

    func_02015e8c(&f.s, data_020b8e44);
    k = 0x4f;
    k <<= 2;
    r4 = *(uint32_t *)((uint8_t *)func_02052d90(f.s.b, (uint32_t)f.s.c) + 0x88);
    r6 = func_ov002_021d3314(p + k) << 12;
    r5 = func_ov002_021d3310(p + k) << 12;
    r5 = func_02081210(r5, r6);
    r6 = 1;
    if ((int)r5 > (int)r4) {
        r6 = 0;
    }
    s = &f.s;
    if (f.s.b != 0) {
        if (s->d != 0) {
            func_02052d3c(s->b, s->c);
        }
        func_02052c04(s->b);
    }
    func_02053290(s);
    return r6 != 0;
}
