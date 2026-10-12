#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void *func_0203b6fc(void);
extern void *func_0203bd04(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_ov002_021c9124(void *p);
extern void func_ov002_021c9130(void *p);
extern void func_ov002_021c916c(void *p);
extern void func_ov002_021c8e38(void *p, void *a, void *b, uint32_t c);
extern void func_ov002_021c8e70(void *out, void *x, uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j,
                                uint32_t k, uint32_t l, uint32_t m, uint32_t n, uint32_t o, uint32_t p, uint32_t q);
extern void func_ov002_021c939c(void *node, void *out);
extern uint32_t func_02055a2c(uint32_t v);
extern void func_ov002_021c8f10(void *p);
extern void func_ov002_021c8e40(void *p);

void *func_ov002_021a4558(uint8_t *p1, void *p2, void *p3, void *p4)
{
    uint8_t *node;
    void *obj;
    Pair tmp;
    uint32_t x[3];
    Pair arr[3];
    uint32_t out[23];
    Pair *base;
    int i;

    obj = func_0203b6fc();
    i = 0;
    node = func_0203bd04(0x10101, 0, 0, 1);
    func_02056bc0(obj, node);

    base = arr;
    func_ov002_021c9124(base);
    func_ov002_021c9124(&arr[1]);
    func_ov002_021c9124(&arr[2]);
    func_ov002_021c9124(&tmp);
    for (; i < 3; i++) {
        base[i] = tmp;
        func_ov002_021c9130(&tmp);
        func_ov002_021c916c(&base[i]);
    }

    func_ov002_021c8e38(x, p2, p3, 0);
    func_ov002_021c8e70(out, x, (uint32_t)p4, 7, 0, 0, 0, 0, 0, 0, 1, 0, 1, (uint32_t)base, 0, 0, 3, 0, 0);

    if (node != 0) {
        node += 0x14;
    }
    func_ov002_021c939c(node, out);
    p1 += 0xf0;
    func_02056bc0(obj, (void *)func_02055a2c(*(uint32_t *)p1));
    func_ov002_021c8f10(out);
    func_ov002_021c8e40(x);
    func_ov002_021c9130(&arr[2]);
    func_ov002_021c9130(&arr[1]);
    func_ov002_021c9130(base);
    return obj;
}
