#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f1;
    uint32_t f2;
    uint8_t f3;
} Ctx;

typedef struct {
    uint32_t w0;
    uint32_t w1;
} Pair;

extern uint32_t data_020b8e44;
extern Pair data_020b00f4;
extern Pair data_020b00fc;

extern void func_020162a0(void *obj, uint32_t v);
extern uint8_t *func_02052d90(uint32_t mar, uint32_t index);
extern void *func_0205681c(uint32_t size);
extern void *func_02045320(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, void *f);
extern void func_02056bc0(void *object, void *node);
extern void func_02052d3c(uint32_t a, uint32_t b);
extern void func_02052c04(uint32_t a);
extern void *func_02053290(void *object);

void func_02049f64(uint8_t *a, uint32_t b)
{
    volatile Pair p;
    Ctx s;
    Ctx *q;
    uint32_t r6;
    void *node;
    uint8_t *m;

    func_020162a0(&s, data_020b8e44);
    m = func_02052d90(s.f1, s.f2);
    r6 = *(uint16_t *)(m + *(uint32_t *)(m + 0x10) + b * 2);

    *(a + 0x9d) = 0;
    node = func_0205681c(0x480);
    if (node != 0) {
        node = func_02045320(node, 0, 0, r6, 0, b, a + 0x9d);
    }
    func_02056bc0(a + 0x14, node);

    if (b != 0) {
        p = data_020b00f4;
    } else {
        p = data_020b00fc;
    }
    {
        uint32_t x1 = p.w1;
        uint32_t x0 = p.w0;
        uint32_t *d = (uint32_t *)(a + 0x80);
        a += 0x84;
        *(uint32_t *)a = x1;
        *d = x0;
    }

    q = &s;
    if (q->f1 != 0) {
        if (q->f3 != 0) {
            func_02052d3c(q->f1, q->f2);
        }
        func_02052c04(q->f1);
    }
    func_02053290(q);
}
